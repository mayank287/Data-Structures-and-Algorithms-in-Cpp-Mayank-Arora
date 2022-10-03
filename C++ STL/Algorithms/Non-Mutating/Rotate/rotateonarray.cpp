// Rotate in on array C++ STL 
#include <iostream>
#include<vector>
#include<algorithm> 

using namespace std;


int main()
{
    
int arr[]  = {10,20,30,40,20};

// rotate(beginitr,miditr(tomakefirst),lastitr);

rotate(arr,arr+2,arr+5);


for(int x : arr){
    cout << x << endl;
    
}
  
    return 0; 
}



// O/P :- 30 40 20 10 20


