// Sort an Array ELement By freq In Linear Time Who Comes First
// Time Complexity o(n)
 
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;


void sortByFreq(int arr[], int n){
unordered_map<int,int> m;
for(int i = 0; i < n; i++)
{
    m[arr[i]]++;
    
}   

vector<int>freq[n + 1];

for(int i = 0; i < n; i++){
    int f = m[arr[i]];
    if(f != -1){
        freq[f].push_back(arr[i]);
        m[arr[i]] = -1; // This is Learning
        
    }
}

int index  = 0;
for(int i = n ;i > 0; i--){
    for(int x :  freq[i]){
        for(int j = 0; j < i; j++){
            arr[index++] = x;
            
        }
    }
}


    
}






int main()
{
 
  int arr[] = {50,20,50,5,6,5,6,20,20,50,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  sortByFreq(arr,n);
  
  
  
      
    for(int z = 0; z < n; z++){
        cout << arr[z] <<  " ";
        
    }
 

 
 
    return 0;
}