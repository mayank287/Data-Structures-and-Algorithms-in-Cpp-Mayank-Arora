// Prefix to Postfix 
class Solution {
  public:
    string preToPost(string s) {
        stack<string> st;
        int n = s.length();
        for(int i = n - 1; i >= 0; i--)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                
            string temp = "";
            temp = temp  + s[i];
            st.push(temp);
        }
        else{
             string op1 = st.top();
             st.pop();
             string op2 = st.top();
             st.pop();
             string temp = "";
             temp +=  op1 + op2 + s[i];
             st.push(temp);
             
            }
        }
        
        return st.top();
        
    }
};