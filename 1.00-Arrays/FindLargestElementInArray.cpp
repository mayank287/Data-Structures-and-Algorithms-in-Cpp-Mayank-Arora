// Find The Largest Element In The Array With o(n2) Complexity
 
#include <iostream>
using namespace std;
int getLargest(int arr[], int n)
{
    for(int i=0;i<n;i++){
        bool flag =  true;
        for(int j=0;j<n;j++){
            if(arr[j] > arr[i]){
                flag = false;
                break;
                
            }
        }
        
        if(flag == true)
        {
            return i ;
        }
    }
    return -1;
}


int main()
{
    int arr[] = {5,8,40,9};
    cout << getLargest(arr,4) <<endl;
    

    return 0;
}
