// Print Distinct Elements in Array
// Time Complexity o(n)


// Variation in Order
#include <iostream>
#include<unordered_set>

using namespace std;

void printDist(int arr[], int n){
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        s.insert(arr[i]);
        
    }
    
    for(int x : s){
        cout << x <<  " ";
        
    }
}

int main()
{
    int arr[] = {10,8,10,10,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    printDist(arr,n);
    

    return 0;
}
// O/P :- in any Order 7,8,10

// In Ordered Form
#include <iostream>
#include<unordered_set>

using namespace std;

void printDist(int arr[], int n){
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
       if(s.find(arr[i]) == s.end()){
           cout <<  arr[i] << " ";
           s.insert(arr[i]);
           
       }
        
    }
  
}





int main()
{
    int arr[] = {10,8,10,10,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    printDist(arr,n);
    

    return 0;
}


// O/P  :- 10,8,7
