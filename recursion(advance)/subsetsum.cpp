class Solution{   
public:
   bool isSubsetSumHelper(vector<int>arr,int n, int sum){
       if(n==0){
           return (sum==0) ? 1 : 0;
       }
       
    return   isSubsetSumHelper(arr,n-1,sum) +  isSubsetSumHelper(arr,n-1,sum-arr[n-1]);
       
   }
                   
   


    bool isSubsetSum(vector<int>arr, int sum){
        int n=arr.size();
     return isSubsetSumHelper(arr,n,sum);
       
    }
};