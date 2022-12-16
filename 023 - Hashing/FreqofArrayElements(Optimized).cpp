// Freq of Array Elements (Optimized)
// Time Complexity O(n) and Space O(n)
int countfreq(int arr[], int n)
{
    unordered_map<int,int> m;
    for(int x : arr)
    {
        m[x]++;
    }

   for(auto e : m)
   {

     cout << e.first << " " << e.second <<  endl;

    
   }

}