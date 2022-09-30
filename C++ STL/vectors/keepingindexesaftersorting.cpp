// Keeping Indezes after sorting 
// Vector Problem 3

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define mp make_pair
#define s sort

void PrintSortedWithIndexes(int arr[], int n){
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        v.push_back(mp(arr[i],i));
        
    }
    
    sort(v.begin(),v.end());
    
    
    for(auto x : v){
       cout << x.first << " " << x.second;
       cout << endl;
       
    }
}



int main()
{
   
  int arr[] = {10,5,16,2,7,100,98};
  
  PrintSortedWithIndexes(arr,7);
  
  return 0;
   
}
