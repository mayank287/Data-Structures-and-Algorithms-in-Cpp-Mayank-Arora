// Sort An Array Using Priority Queue
// Using Max heap
#include <iostream>
#include <queue>

using namespace std;
void MySort(int arr[], int n)
{
    priority_queue<int>  pq(arr,arr + n);
    for(int i = n-1; i >= 0; i--){
        arr[i] = pq.top();
        pq.pop();
    }
}

int main()
{
  
  int arr[] = {12,5,8};
 int n = 3;
  
  MySort(arr,n);
  
  for(int i = 0; i < n; i++ ){
      cout << arr[i] <<  " ";
      
   }
  
  
 
    return 0;
}


// Using Min Heap
#include <iostream>
#include <queue>
#include<vector>
using namespace std;


void MySort(int arr[], int n)
{
    priority_queue<int,vector<int>,greater<int>>pq(arr,arr + n);
    for(int i = 0; i < n; i++){
        arr[i] = pq.top();
        pq.pop();
    }
}

int main()
{
  
  int arr[] = {12,5,8};
 int n = 3;
  
  MySort(arr,n);
  
  for(int i = 0; i < n; i++ ){
      cout << arr[i] <<  " ";
      
   }
  
  
  
  
 
    return 0;
}
// Time Complexity o(nlogn)