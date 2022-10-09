// Design A Ds That Store  id and  Amount(Naive Solution)
// Time Complexity o(n)

#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;


void Set(int id,int bal){
    for(int i = 0; i < v.size(); i++){
        if(v[i].first == id){
            v[i].second = bal;
            return;
        }
    }
    
    v.push_back({id,bal});
    
}
   
   
   
void get(int id){
    for(int i = 0; i <v.size();i++){
       if(v[i].first == id){
           cout << v[i].second << " ";
           return;
           
           
       }
    }
    cout << "No Id Found" << endl;
    
    
}   
    
int main()
{
    
    Set(1,20);
    Set(2,40);
    Set(4,60);
    Set(2,90);
    Set(1,150);
    get(2);
    get(1);
 
    return 0;
}

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
    }
    
    cout << winner << endl;
    
}


   
    
    
    


int main()
{
    string arr[] = {"abc","xyz","abc","pqr"};
    findWinner(arr,4);
    
    return 0;
}
