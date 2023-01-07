// Josephus Problem 

#include <iostream>
using namespace std;

int jos(int n, int k)
{
    if(n == 1) return 0;
    else return (jos(n - 1,k) + k )%n;
}
int main() {

    cout << jos(5,2);

    return 0;
}

// LeetCode Solution
class Solution {
public:
    int helper(int n, int k)
    {
        if(n == 1) return 0;
        else return (helper(n - 1,k) + k) % n;
    }
    int findTheWinner(int n, int k) {
        return helper(n,k) + 1;
    }
};