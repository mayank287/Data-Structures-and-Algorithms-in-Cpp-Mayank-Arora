// Smaller element Problem Using vector
#include <iostream>
#include<vector>


using namespace std;

vector <int> getSmaller(int arr[], int n ,int k){
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(arr[i] < k){
            ans.push_back(arr[i]);
            
        }
    }
    
    
    return ans;
    
}

int main()
{


int arr[] = {10,5,30,40,20};
vector<int> res = getSmaller(arr,5,25);
for(int x:res)
{
    cout << x << endl;
    
}
 return 0;
 
}