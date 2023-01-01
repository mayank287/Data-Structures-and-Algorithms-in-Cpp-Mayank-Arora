// Union of Two Sorted Array Optimized
// Time Complexity O(m + n)
// Aux Space O(1)

#include <iostream>
using namespace std;


void printUnion(int a[], int b[], int m, int n)
{
     int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && a[i-1]==a[i]){i++;continue;}
        if(j>0 && b[j-1]==b[j]){j++;continue;}
        if(a[i]<b[j]){cout<<a[i]<<" ";i++;}
        else if(a[i]>b[j]){cout<<b[j]<<" ";j++;}
        else{cout<<a[i]<<" ";i++;j++;}
    }
        while(i<m){if(i==0||a[i]!=a[i-1])cout<<a[i]<<" ";i++;}
        while(j<n){if(j==0||b[j]!=b[j-1])cout<<b[j]<<" ";j++;}
        
}




int main()
{
       int a[] = {12 ,42};
    int b[] = {3, 4, 5, 28 ,37 ,42, 43, 46};
    
    printUnion(a,b,3,9);

    return 0;
}