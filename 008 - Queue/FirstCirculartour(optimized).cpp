// First Circular Tour 
// Time Complexity O(n) and Space O(1)
class Solution {
public:
    int canCompleteCircuit(vector<int>& petrol, vector<int>& dis) {
        int n = petrol.size();
        int start = 0, curr_petrol = 0,prev_petrol = 0;
        for(int i = 0; i < n; i++)
        {
            curr_petrol += (petrol[i] - dis[i]);
            if(curr_petrol < 0)
            {
                start = i + 1;
                prev_petrol += curr_petrol;
                curr_petrol = 0;
            }
        }

        return ((curr_petrol + prev_petrol >= 0) ? start : -1);
    }
};