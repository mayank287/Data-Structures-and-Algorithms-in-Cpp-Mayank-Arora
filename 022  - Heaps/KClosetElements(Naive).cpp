// K Closet Elements in 
// Time Complexity O(nk) and Aux Space O(n)
#include <bits/stdc++.h>
using namespace std;

void printKClosest(int arr[], int n, int k, int x)
{
    bool visited[n]={false};
    
    for(int i=0;i<k;i++){
        
        int min_diff=INT_MAX;
        int min_diff_idx;
        
        for(int j=0;j<n;j++){
            if(visited[j]==false && abs(arr[j]-x)<=min_diff){
                min_diff=abs(arr[j]-x);
                min_diff_idx=j;
            }
        }
        cout<<arr[min_diff_idx]<<" ";
        visited[min_diff_idx]=true;
    }
}

int main()
{

	int arr[] = { 10,30,5,40,38,80,70 };

	int size = sizeof(arr) / sizeof(arr[0]);

	int x=35; int k = 3;

	printKClosest(arr,size,k,x);

	return 0;
}
