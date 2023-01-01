// Sort an Array Element By Frequency
// Time Complexity o(n + dlogd)
#include <iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;


bool myCmp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second = p2.second)  return p1.first < p2.first;
    return p1.second > p2.second;
    
}

void sortByfreq(int arr[], int n){
    unordered_map<int,int> m;
    for(int i = 0; i < n; i++)
    {
        m[arr[i]]++;
        
    }
    
    vector<pair<int,int>> v(m.begin(),m.end());
    sort(v.begin(),v.end(),myCmp);
    int i = 0 ;
    for(auto x : v){
        for(int j = 0; j < x.second; j++){
            arr[i++] = x.first;
            
            
        }
    }
}


int main()
{
   int arr[] = {10,20,30,10,20,30,10};
   sortByfreq(arr,7);
   for(int i = 0; i < 7; i++){
       cout << arr[i] << " ";
       
   }

    return 0;
}


// Gfg Solution
#include <bits/stdc++.h>
using namespace std;

bool myCmp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second == p2.second){
        return p1.first <  p2.first;
        
    }
    
    return p1.second >  p2.second;
        
}

int main() {
   int t;
   cin >> t;
   while(t--){
       int size;
       cin >> size;
       vector<int> v;
       unordered_map<int,int> m;
       
       for(int i = 0; i < size; i++){
           int nums;
           cin >> nums;
           v.push_back(nums);
           
       }
        for(int i = 0; i < v.size(); i++){
            m[v[i]]++;
            
        }
        
        vector<pair<int,int>> freq(m.begin(),m.end());
        sort(freq.begin(),freq.end(),myCmp);
        
        int i = 0;
        for(auto x : freq){
            for(int j = 0; j < x.second; j++){
              v[i++] = x.first;
              
            }
        }
        
        
       
       for(auto x : v){
           cout << x << " ";
           
       }
       
       cout << endl;
       
       
       
       
       
   }
	return 0;
}