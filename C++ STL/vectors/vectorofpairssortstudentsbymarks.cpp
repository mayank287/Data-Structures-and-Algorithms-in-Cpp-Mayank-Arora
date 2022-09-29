// Sort Students by Marks 
// Vectors Of pair
#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;
int mycmp(pair<int,int> p1,pair<int,int> p2){
    return p1.second > p2.second;
    
}

void printSortedByMarks(int roll[], int marks[], int n){
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        v.push_back({roll[i],marks[i]});
        
    };
    sort(v.begin(),v.end(),mycmp);
    
    
    for(int i = 0; i< n;i++){
        cout << v[i].first << " " << v[i].second;
        cout << endl;
        
    }
    
     
    
    
}

int main()
{


int roll[] = {101,103,105};
int marks[] ={80,70,90};
printSortedByMarks(roll,marks,3);

 return 0;
 
}