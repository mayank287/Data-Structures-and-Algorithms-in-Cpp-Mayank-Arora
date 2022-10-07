// Sort in C++ STL on Array 
#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[] = {10,20,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr + n);
    for(int x :arr ){
        cout << x << endl;
        
    }

    return 0;
}



// Using Cmp function Greater function
#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[] = {10,20,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr + n,greater<int> ());
    for(int x :arr ){
        cout << x << endl;
        
    }

    return 0;
}
