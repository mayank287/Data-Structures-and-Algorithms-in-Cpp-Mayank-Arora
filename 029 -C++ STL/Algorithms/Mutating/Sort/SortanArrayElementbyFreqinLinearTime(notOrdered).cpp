// Sort an Array Element by Freq in Linear Time Method One 
// Time Complexity o(n)
 
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;


void sortByFreq(int arr[], int n){
    
    unordered_map<int,int> m;
    for(int i = 0 ; i < n; i++){
        m[arr[i]]++;
    }
    
    
    vector<int> freq[n + 1];
    for(auto x : m){
        freq[x.second].push_back(x.first);
        
    }
    
    int index = 0;
    for(int i = n; i > 0; i--){
        for(int x : freq[i]){
            for(int j = 0; j < i; j++){
                arr[index++] = x;
                
            }
        }
    }

    
    
}






int main()
{
 
  int arr[] = {10,5,20,5,10,10,30};
  
  sortByFreq(arr,7);
  
    
    for(int z = 0; z < 7; z++){
        cout << arr[z] <<  " ";
        
    }
 

 
 
    return 0;
}


