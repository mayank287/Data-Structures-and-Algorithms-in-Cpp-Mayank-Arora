// Fractional KnapSack Problem 
// Time Complexity o(nlogn)

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;


bool myCmp(pair<int,int> a, pair<int,int> b){
    double r1 =  (double) a.first/a.second;
    double r2 =  (double)  b.first/b.second;
    return r1  > r2;
    
}

double fknapS(int w,vector<pair<int,int>> arr, int n ){
    sort(arr.begin(),arr.end(),myCmp);
    double res = 0.0;
    for(int i = 0; i < n; i++){
        if(arr[i].second <= w){
            res += arr[i].first;
            w = w- arr[i].second;
            
        }
        else{
            res += arr[i].first * ((double) w/arr[i].second);
            break;
            
        }
        
    }
    return res;
    
}


int main()
{
    int q[] = {60,100,120};
    int w[] = {10,20,30};
    
    int n = sizeof(q)/sizeof(q[0]);
    
   vector<pair<int,int>> v;
   for(int i = 0; i < n; i++){
       v.push_back({q[i],w[i]});
   }
   
   
   cout << fknapS(50,v,n);
   

    return 0;
}


// GFG Solution

class Solution
{
    public:
    static bool myCmp(pair<int,int> a, pair<int,int> b){
       double r1 = (double) a.first/a.second;
       double r2 = (double) b.first/b.second;
        
        return r1 > r2;
        
        
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
       vector<pair<int,int>>v;
       for(int i = 0; i < n; i++ ){
           v.push_back({arr[i].value,arr[i].weight});
         }
         
         sort(v.begin(),v.end(),myCmp);
         double res = 0.0;
         for(int i = 0; i < n; i++){
             if(v[i].second <= W){
                 res += v[i].first;
                 W = W - v[i].second;
                
             }
             
             else{
                 res += v[i].first * ((double) W/ v[i].second );
                 break;
                 
             }
         
    }
         return res;
    }    
};