// Pair With Given Sum in Array
// Time Complexity o(n)
#include <iostream>
#include<unordered_set>

using namespace std;

void isPair(int arr[],int n, int sum){
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        if(s.find(sum - arr[i] ) == s.end()){
            cout << "Pair is yes" << endl;
            return;
            
        }
        else{
            s.insert(arr[i]);
            
        }
    }
    cout << "Pair is No" << endl;
    
}



int main()
{
    int arr[] = {10,20,3,28,5,6,};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    isPair(arr,n,100);
    
 
    return 0;
}



