// Maximum Occured Integer in Range 
class Solution{
    public:
    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx){
     
        vector<int> ans(maxx + 2,0);
        for(int i = 0; i < n; i++)
        {
           ans[L[i]]++;
           ans[R[i] + 1]--;
        }
        
        int res = 0;
        int maxi = ans[0];
        for(int i = 1; i <= maxx + 1; i++)
        {
            ans[i] += ans[i - 1];
            if(maxi < ans[i])
            {
                maxi = ans[i];
                res = i;
            }
        }
        
        return res;
    }
};