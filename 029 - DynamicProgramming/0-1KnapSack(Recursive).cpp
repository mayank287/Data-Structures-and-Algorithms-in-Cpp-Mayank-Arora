// 0 - 1 KnapSack (Recursive)
// Time Complexity O(2 ^ n)

#include<bits/stdc++.h>
using namespace std;

int KnapSack(int w, int wt[], int val[], int n)
{
    if(n == 0 || w == 0) return 0;
    if(wt[n - 1] > w) return KnapSack(w,wt,val,n - 1);
    else{
        return max(val[n - 1] + KnapSack(w-wt[n - 1],wt,val,n - 1),KnapSack(w,wt,val,n - 1));
    }
}


int main()
{
    int val[] = {1,2,3};
    int wt[] = {4,5,6};
    int w = 3;
    int n = sizeof(val)/sizeof(val[0]);
    
    cout << KnapSack(w,wt,val,n);
}