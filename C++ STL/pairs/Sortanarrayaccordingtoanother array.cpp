// Sort an array according to another array 
// Solve Using Pairs
// Time Complexity o(nlogn) because of sort
// Auxiliary space o(n) as We Use Pair

#include <iostream>
#include<algorithm>

using namespace std;


void sortchar(int a[],char b[], int n){
    pair <int,char> pa[n];
    for(int i = 0; i < n; i++){
        pa[i] = {a[i],b[i]};
        
    }
    
    sort(pa,pa+n);
    for(int i = 0; i < n; i++){
        
        cout << pa[i].second <<  " ";
        
    }
}


int main()
{
    int a[] = {65156,25,2,2414,70};
    char b[] = {'x','y','z','a','d'};
    
    sortchar(a,b,5);
    

    return 0;
} 