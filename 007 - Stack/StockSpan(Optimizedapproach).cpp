// Stock Span Problem Using Stack Time Complexity o(n)
#include <iostream>
#include<stack>

using namespace std;

void printSpan(int arr[], int n){
   stack <int> st;
        st.push(0);
        cout << 1  << " ";
        for(int i = 1; i<n;i++){
            while(st.empty() ==  false && arr[st.top()] <= arr[i]){
                st.pop();
            }
            
            int span = st.empty() ?  i +1 : i-st.top();
            
            
            cout << span << " ";
            st.push(i);
        }
        
    
}





int main()
{
  int arr[] = {100 ,80, 60 ,70 ,60 ,75 ,85};
   
   printSpan(arr,7);
       return 0;
}



// GFG Solution(New Thing Learn We Have Return The Vector Array)
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {   
       vector <int> ans;
        
       stack <int> st;
        st.push(0);
        ans.push_back(1);
        for(int i = 1; i<n;i++){
            while(st.empty() ==  false && price[st.top()] <= price[i]){
                st.pop();
            }
            
            int span = st.empty() ?  i +1 : i-st.top();
            ans.push_back(span);
            st.push(i);
        }
        
        
        return ans;
    }
    
};