// Convert Infix Expression to Postfix Expression4
class Solution {
  public:
   int presedence(char c)
   {
       if(c == '^') return 3;
       else if(c == '*' || c == '/') return 2;
       else if(c == '+' || c == '-') return 1;
       else return -1;
       
   }
    string infixToPostfix(string s) {
        stack<char> st;
        string res;
        int n= s.length();
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
                
            }
            else if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
            {
                res += s[i];
                
            } 
            else if(s[i] == ')')
            {
                while(!st.empty() && st.top() != '(')
                {
                    res += st.top();
                    st.pop();
                    
                }
                if(!st.empty())
                {
                    st.pop();
                    
                }
                  }
                else{
                    while(!st.empty() && presedence(st.top()) >= presedence(s[i]))
                    {
                        res += st.top();
                        st.pop();;
                    }
                    st.push(s[i]);
                    
                }
        }
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }
        
        return res;
     
        
    }
};