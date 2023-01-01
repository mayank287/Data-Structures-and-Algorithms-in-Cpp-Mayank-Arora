// Count greater elements for every array element
// Time Complexity o(nlogn)
#include <iostream>
#include<map>
using namespace std;

void printGreater(int arr[], int n){
map<int,int> m;


for(int i = 0 ; i < n; i++ ){
  m[arr[i]]++;    


}
int cum_freq = 0;
for(auto it = m.rbegin(); it != m.rend(); it++){
    int freq = it -> second;
    it -> second = cum_freq;
    cum_freq += freq;
}

for(int i =0 ; i < n ; i++){
    cout << m[arr[i]] << " ";
    
}




}

int main()
{
    
int arr[] = {5,6,2,10,25,6};
printGreater(arr,6);

   
}
