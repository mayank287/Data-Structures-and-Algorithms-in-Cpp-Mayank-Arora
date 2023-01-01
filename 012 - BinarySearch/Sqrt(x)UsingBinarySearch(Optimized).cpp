// Sqrt(x) Using Binary Search 
#include <iostream>
using namespace std;


int sqRootFloor(int x)
{
    long long low = 0, high = x, ans = -1;
    while(low <= high)
    {
        long long mid = (low + high) / 2;
        long long msq = mid * mid;
        if(msq == x)
        {
            return mid;
            
        }
        else if(msq > x)
        {
            high = mid - 1 ;
            
        }
        else{
            low = mid + 1;
            ans = mid;
            
        }
    }
    
    return ans;
}




int main()
{
    int n; 
    cin >> n;
    cout << sqRootFloor(n);
    

    return 0;
}
