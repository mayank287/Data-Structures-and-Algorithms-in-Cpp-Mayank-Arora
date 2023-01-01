// String Palindrome (Optimized)
#include <iostream>
#include<algorithm>
using namespace std;

bool isPal(string str)
{
   int begin = 0;
   int end  = str.length() - 1;
   while(begin < end)
   {
       
   if(str[begin] != str[end])
   {  
       return false;
   }  
   
   begin++;
   end--;
   
   }
   
   return true;
   
    
}





int main()
{
    string str = "abbas";
    cout << isPal(str);
    

    return 0;
}
