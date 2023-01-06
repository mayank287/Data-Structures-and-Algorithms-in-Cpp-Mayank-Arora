// Infix to Postfix Conversion 
class Solution {
  public:
    int pre(char s)
    {
        if(s == '^') return 3;
        else if(s == '*' || s == '/') return 2;
        else if(s == '+' || s == '-') return 1;
        else return -1;
    }
    string infixToPostfix(string s) {
       stack<char> st;
       int n = s.length();
       string ans = "";
       for(int i = 0; i < n; i++)
       {
           if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
           {
               ans += s[i];
           }
           else if('(')
           {
               st.push(s[i]);
           }
           else if(s[i] == ')')
           {
               while(!st.empty() && st.top() != '(')
               {
                   ans += st.top();
                   st.pop();
               }
               if(!st.empty())
               {
                   st.pop();
               }
           }
           else{
               while(!st.empty() && pre(st.top()) >= pre(s[i]))
               {
                   ans += st.top();
                   st.pop();
               }
               st.push(s[i]);
           }
       }
       while(!st.empty())
       {
           ans +=  st.top();
           st.pop();
       }
       
       return ans;
       
       
    }
};