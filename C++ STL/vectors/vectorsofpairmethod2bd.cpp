// Vectors of Pair Method Second
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

 void printSortedByMarks(int roll[], int marks[],int n)
 {
     vector<pair<int,int>> v;
     for(int i = 0; i < n; i++){
         v.push_back({marks[i],roll[i]});
         
     }
     
     
     sort(v.begin(),v.end(),greater<pair<int,int>>());
     
     for(int i = 0; i< n; i++){
         cout << v[i].second << " " << v[i].first;
         cout << endl;
     }
            
 }

int main(){
    
     int roll[] = {101,103,105};
     int marks[] = {80,70,90};
     
     printSortedByMarks(roll,marks,3);
     
     
     return 0;
     
    
    
}

 