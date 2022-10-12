// Distribute Candies 
// Time Complexity o(n)

#include <iostream>
#include<unordered_set>


using namespace std;

void maxDistinct(int arr[], int n, int k){
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        s.insert(arr[i]);
        
    }
    
    
    int types = s.size();
    
    if(types > n/2){
        cout << n/2 << endl;
    } else
    {
        cout << types << endl;
        
    }
    
    
}



int main()
{
   int arr[] = {1,1,2,2,3,3};
   maxDistinct(arr,6,2);
   

    return 0;
}








//  LeetCode Solution

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        unordered_set<int> s;
        for(int i = 0; i < candyType.size(); i++)
        {
            s.insert(candyType[i]);
            
        }
        
        int types = s.size();
        
        if(types > candyType.size()/2){
            return candyType.size()/2;
        }
        else{
           return types;
        }
        
        
        
        
    }
};