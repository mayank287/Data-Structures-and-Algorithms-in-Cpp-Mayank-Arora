// Next Greater Element Optimized o(n)
// Learning From This Question We Use long long to Handle Larger Test Cases 
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
       vector<long long> ans;
        stack<long long> st;
        
        ans.push_back(-1);
        st.push(arr[n-1]);
        
        
        for(int i = n-2; i >=0; i--){
            while(st.empty() == false && st.top() <= arr[i]){
                st.pop();
            }
            
            long long NextGreater = st.empty() ? -1 : st.top();
            
            ans.push_back(NextGreater);
            st.push(arr[i]);
            
            
            
            
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    };
       