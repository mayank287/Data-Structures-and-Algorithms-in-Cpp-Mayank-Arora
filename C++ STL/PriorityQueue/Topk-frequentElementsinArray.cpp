// Top k frequent Element in Arrays
#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

bool myCmp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second == p2.second){
        return p1.first < p2.first;
    }
    
    return p1.second > p2.second;
    
}



void printFrequent(int arr[], int n, int k){
    unordered_map<int,int> m;
    for(int i  = 0; i < n; i++){
        m[arr[i]]++;
    }
    vector<pair<int,int>> v(m.begin(),m.end());
    
    sort(v.begin(),v.end(),myCmp);
    
    for(int i = 0; i < k; i++){
        
    cout << v[i].first << endl;
    }
    
    
}




int main()
{
   int arr[] = {20,40,30,20,30,40,60,60,60};
   printFrequent(arr,9,5);
   

    return 0;
}
// Time Complexity o(n)(map) + o(n) (vector) + p(nlogn) (sort) + o(n) (klogn)
// Time Complexity o(nlogn)


