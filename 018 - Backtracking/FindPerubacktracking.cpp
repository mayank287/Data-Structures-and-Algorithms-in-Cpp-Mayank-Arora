// Find Permut Backtracking 
#include <iostream>
using namespace std;

bool isSafe(string str, int low, int i, int high)
{
    if(low != 0 && str[low - 1] == 'A' && str[i] == 'B'){
        return false;
    }
    
    if(high = (low + 1) && str[i] == 'A' && str[low] == 'B')
    {
        return false;
    }
    
    return true;
    
    
    
    
}



void permute(string str, int low,int high)
{
    
    if(low == high)
    {
            cout << str << " ";
            return;
      
    }
    else{
        for(int i = low; i <= high; i++)
        {
            if(isSafe(str,low,i,high))
            {
                
            swap(str[i],str[low]);
            permute(str,low + 1, high);
            swap(str[i],str[low]);
            
            }
        }
    }
    
}





int main()
{
   string str = "ABC";
   permute(str,0,str.length() - 1);
   

    return 0;
}
