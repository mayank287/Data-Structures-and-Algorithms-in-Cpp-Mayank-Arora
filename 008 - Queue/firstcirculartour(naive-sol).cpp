// First Circular Tour
// Naive Approach 
// Time Complexity o(n^2)
// https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1
// https://leetcode.com/problems/gas-station/


#include <iostream>
using namespace std;


int firstPetrolPuml(int petrol[], int des[], int n){
    for(int start = 0; start < n; start++){
        int curr_petrol = 0;
        int end = start;
        while(true){
            curr_petrol += (petrol[end] - des[end] );
                if(curr_petrol < 0){
                     break;
                }
            end = (end + 1) % n;
            if(end == start){
                return (start + 1);
                
            }
            
        }
         
         
    
    }
         return -1;
}
int main()
{
    int petrol[] = {4,6,7,4};
    int des[] = {6,5,3,5};


  cout << firstPetrolPuml(petrol,des,4);
  
    return 0;
}
// O/P is 2 
