// Perute WIth Condition 
#include <iostream>
using namespace std;

void permute(string str, int low,int high)
{
    
    if(low == high)
    {
        if(str.find("AB") == string::npos)
        {
            cout << str << " ";
        }
            return;
    }
    else{
        for(int i = low; i <= high; i++)
        {
            swap(str[i],str[low]);
            permute(str,low + 1, high);
            swap(str[i],str[low]);
            
        }
    }
    
}





int main()
{
   string str = "ABC";
   permute(str,0,str.length() - 1);
   

    return 0;
}
