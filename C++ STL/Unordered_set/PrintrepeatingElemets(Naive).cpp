// Print Repeating Elements Naive 
// Time Complexity o(n2)
#include <iostream>


using namespace std;
 
 
 
 void printrepating(int arr[], int n){
     for(int i = 1; i < n; i++){
         bool flag = false;
         for(int j = 0; j < i; j++){
             if(arr[i] == arr[j]){
                 flag = true;
                 break;
             }
         }
         
         
         if(flag == true){
             cout << arr[i] << endl;
             
         }
         
         
         
     }
 }


int main()
{
    int arr[] = {1,2,5,64,8,9,2,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printrepating(arr,n);
    

    return 0;
}

// Some Kind Porblem 
#include <iostream>
#include<unordered_set>

using namespace std;
 
 
 
 void printrepating(int arr[], int n){
     unordered_set<int> s;
     for(int i = 0; i <n; i++){
         if(s.find(arr[i]) == s.end()){
             s.insert(arr[i]);
         }
         else{
             cout << arr[i] << " ";
             
         }
     }
}





int main()
{
    int arr[] = {13 ,9 ,25 ,1, 1 ,0 ,22 ,13 ,22 ,20 ,3 ,8 ,11, 25, 10, 3, 15, 11, 19, 20, 2, 4, 25 ,14 ,23, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    printrepating(arr,n);
    

    return 0;
}