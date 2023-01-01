// Cut The Rod in the Segments of a,b,c
// Time Complexity O(3 ^ n)
#include <iostream>
using namespace std;

int maxCuts(int n, int a, int b, int c)
{
    if(n == 0) return 0;
    if(n <= -1) return -1;
    int res = 
    max(maxCuts(n - a,a,b,c),
    max(maxCuts(n - b,a,b,c),maxCuts(n - c,a,b,c)));
    
    if(res == -1) return -1;
    return res + 1;
}


int main() {
    	int n = 5, a = 5, b = 3, c = 2;
	
	cout<<maxCuts(n, a, b, c);

    return 0;
}