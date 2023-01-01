// Winner of Election
// Time Complexity o(n)

#include<iostream>
#include<unordered_map>
using namespace std;


void findWinner(string arr[],int n){
    unordered_map<string,int> m;
    for(int  i = 0; i < n; i++){
        m[arr[i]]++;
    }
    
    
    
    int max_freq = 0;
    string winner;
    
    for(auto x : m){
        if(x.second > max_freq){
            max_freq = x.second;
            winner = x.first;
            
        }
        else if(x.second == max_freq && x.first < winner){
            winner = x.first;
            
        }
    }
    
    cout << winner << endl;
    
}  
    


int main()
{
    string arr[] = {"abc","xyz","abc","pqr","xyz","xyz","abc"};
    findWinner(arr,4);
    
    return 0;
}


// gfg Solution
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    { 
        vector<string> ans;
        
        
        
        unordered_map<string,int> m;
        for(int i = 0; i < n; i++){
            m[arr[i]]++;
        }
        
        int max_freq = 0;
        string winner;
        for(auto x : m){
            if(x.second > max_freq  ){
                max_freq = x.second;
                winner = x.first;
                
            }
            else if(x.second ==  max_freq && x.first < winner){
             winner = x.first;
             
            }
        }
        
     string freq = to_string(max_freq);
     ans.push_back(winner);
     ans.push_back(freq);
     
     
     return ans;
     
        
        
    }
};