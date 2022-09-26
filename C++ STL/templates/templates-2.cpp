// Templates Program 2
#include <iostream>
using namespace std;


template <typename T> 
T arrMax(T arr[],int n)
{
    
    T res = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] >  res){
            res = arr[i];
            
        }
    }
    
    
    
    return res;
        
    
}


int main()
{
  int arr[] = {10,20,30,40,50};
  cout << arrMax <int> (arr,5) << endl;
  
  float arr1[] = {1.0,25.5,6.3,15.36};
  
  cout <<  arrMax <float> (arr1,4) << endl;
  

    return 0;
}
