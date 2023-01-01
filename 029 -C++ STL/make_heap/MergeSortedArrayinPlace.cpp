// Merge Sorted Array InPlace  using make_heap  in C++ STL
// Time Complexity o((m + n) * logn)
#include <iostream>
#include<algorithm>

using namespace std;

void merge(int a[], int b[], int m, int n){
    for(int i = 0; i < m; i++){
        if(a[i] > b[0]){
            pop_heap(b, b + n,greater<int>());
            swap(a[i],b[n-1]);
            push_heap(b,b+n,greater<int>());
            
        }
    }
    
    sort(b,b+n);
    
}

int main()
{
 int a[] = {3,20,40};
 int b[] = {2,10,12};
 
 merge(a,b,3,3);
 for(int i = 0; i < 3; i++){
     cout << a[i] << " ";
   
     
 }
 for(int j = 0; j < 3; j++){
     cout << b[j] << " ";
     
 }

    return 0;
}
