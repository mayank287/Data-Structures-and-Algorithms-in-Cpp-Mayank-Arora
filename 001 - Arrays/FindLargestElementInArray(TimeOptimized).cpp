// Find Largest Element In Array In theta(n) Time

#include <iostream>
using namespace std;
int getLargest(int arr[], int n)
{
   int res = 0;
   for(int i=1;i<n;i++){
       if(arr[i] > arr[res])
       {
           res = i;
       }
       
   }
   return res;
   
}


int main()
{
    int arr[] = {150,100,40,9};
    cout << getLargest(arr,4) <<endl;
    

    return 0;
}
