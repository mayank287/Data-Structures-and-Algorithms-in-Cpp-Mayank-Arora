// Left Most Non Repeating Char(Naive)
// Time Complexuty O(n2)
#include <iostream>
using namespace std;

int nonRep(string &str)
{

    for(int i = 0; i < str.length(); i++)
    {
        bool flag = false;
        for(int j = 0; j < str.length(); j++)
        {
            if(i != j && str[i] == str[j])
            {
                flag = true;
                break;
            }
        }
        
        
        if(flag == false) return i;
        
        
        
        }
    return -1;
    
}




int main()
{
   string str = "abcbca";
   cout << nonRep(str);
   

    return 0;
}
