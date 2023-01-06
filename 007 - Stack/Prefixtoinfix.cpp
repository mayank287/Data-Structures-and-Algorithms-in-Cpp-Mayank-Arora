// Prefix to Infix 
class Solution {
  public:

    string preToInfix(string s) {
        stack<string> st;
        int n = s.size();
        for(int i = n - 1; i >= 0; i--)
        {
            char ch = s[i];
            if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                string st1 = st.top();
                st.pop();
                string st2 = st.top();
                st.pop();
                string temp = "(" + st1 + ch + st2 + ")";
                st.push(temp);
                
            }
            else{
                st.push(string(1,ch));
            }
        }
        
        return st.top();
    }
};