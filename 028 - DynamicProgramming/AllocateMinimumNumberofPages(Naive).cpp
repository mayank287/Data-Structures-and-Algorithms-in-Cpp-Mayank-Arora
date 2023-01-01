// Allocate Minium Number of Pages (Naive)
#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int b, int e)
{
    int s = 0;
    for(int i = b; i <=e; i++)
    {
        s+= arr[i];
    }
    
    return s;
    
}


int minPages(int arr[], int books,int students)
{
    if(students == 1) return sum(arr,0,books - 1);
    if(books == 1) return arr[0];
    int res = INT_MAX;
    
    for(int i = 1; i < books; i++)
    {
        res = min(res,max(minPages(arr,i,students - 1),sum(arr,i,books - 1 )));
    }
    return res;
    
    
}


int main() {
   int arr[] = {15,17,20};
   int n = sizeof(arr)/sizeof(arr[0]);
   
   cout << minPages(arr,n,2);

    return 0;
}