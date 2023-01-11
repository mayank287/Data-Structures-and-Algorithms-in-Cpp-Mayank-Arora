//Job Sequencing Problem
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    static bool comp(Job a,Job b)
    {
        return (a.profit > b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
       sort(arr,arr + n,comp);
       vector<int> ans(2,0);
       int sum = 0,count = 0;
       bool slot[n];
      for(int i = 0; i < n; i++)
      {
          slot[i] = false;
      }
      
      for(int i = 0; i < n; i++)
      {
          for(int j = arr[i].dead - 1; j >= 0; j--)
          {
              if(slot[j] == false)
              {
                  sum += arr[i].profit;
                  count++;
                  slot[j] = true;
                  break;
              }
          }
      }
      
      ans[0] = count;
      ans[1] = sum;
      return ans;
      
    } 
    
};