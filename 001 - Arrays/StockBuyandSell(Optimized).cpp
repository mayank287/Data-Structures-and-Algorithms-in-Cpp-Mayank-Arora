// Stock Buy ans Sell Optimized
// Time Complexity O(n)
#include <iostream>
#include <cmath>
using namespace std;


int maxProfit(int price[], int n)
{
	int profit = 0;

	for(int i = 1; i < n; i++)
	{
		if(price[i] > price[i - 1])
			profit += price[i] - price[i -1];
	}

	return profit;

}


int main() {
	
      int arr[] = {1, 5, 3, 8, 12}, n = 5;

      cout<<maxProfit(arr, n);
    
}



// GFG Solution 
void stockBuySell(int price[], int n) {
    vector<vector<int>> ans;
   for(int i = 1; i < n; i++)
   {
       vector<int> temp;
       if(price[i] > price[i - 1])
       {
           temp.push_back(i - 1);
           while(i < n && price[i] > price[i - 1])
           {
               
           i++;
           }
             
       temp.push_back(i - 1);
       ans.push_back(temp);
       
       }
       
   }
   
   if(ans.empty())
   {
       cout << "No Profit" << endl;
       return;
       
   }
   
   for(auto it : ans)
   {
       cout << "(" << it[0] << " "  << it[1] << ")" << " ";
       
   }
   cout << endl;
   
   return;
}