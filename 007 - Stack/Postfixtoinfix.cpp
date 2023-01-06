// Postfix to Infix
class Solution {
  public:
   bool isopd(char c)
   {
       if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

        {

            return false;

        }

        return true;
       
   }
     string postToInfix(string exp) {
      stack<string> st;
      string res;
      int n = exp.length();
      for(int i = 0; i < n; i++)
      {
          char c = exp[i];
          if(isopd(c))
          {
              string str1 = st.top();
              st.pop();
              string str2 = st.top();
              st.pop();
              
              st.push('(' + str2 + exp[i] + str1 + ')');
          }
          else{
              st.push(string(1,exp[i]));
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