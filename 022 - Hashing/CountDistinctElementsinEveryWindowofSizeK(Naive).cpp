// Count Distinct Elements in Every Window
// Time Complexity O((n - k) * k * k)
#include <bits/stdc++.h>
using namespace std;

void printDistinct(int arr[], int n, int k)
{
    for(int i=0;i<=n-k;i++){
        int count=0;
        for(int j=0;j<k;j++){
            bool flag=false;
            for(int p=0;p<j;p++){
                if(arr[i+j]==arr[i+p])
                {
                    flag=true;break;
                }
            }
            if(flag==false)count++;
            
        }
        cout<<count<<" ";
    }
}

int main()
{
    int arr[] = {10, 10, 5, 3, 20, 5};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    printDistinct(arr, n, k);
}   