// is_permutation on array
#include <iostream>
#include<algorithm>

using namespace std;





int main()
{
    
    int arr[] = {30,20,10};
    int arr2[] = {10,20,360};
    
    
    if(is_permutation(arr,arr+3,arr2)){
        cout << "Yes";
    }
    else{
        cout << "Np";
    }
   

    return 0; 
}

