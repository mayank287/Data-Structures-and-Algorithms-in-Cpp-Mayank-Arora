// Postfix to Prefix 
class Solution {
  public:
    string postToPre(string s) {
        stack<string> st;
        int i = 0;
        int size = s.length();
        while(i < size)
        {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                string s1 = st.top();
                st.pop();
                string s2 = st.top();
                st.pop();
                
                string btw = s[i] + s2 + s1;
                st.push(btw);
                i++;
            }
            else{
                // string str;
                // str += s[i];
                st.push(string(1,s[i]));
                i++;
            }
        }
            return st.top();
    }
};