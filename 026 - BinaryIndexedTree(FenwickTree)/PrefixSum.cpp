// Prefix Sum Query
// Time Complexity theta(logn)
int bitTree[n + 1];
int getSum(int i)
{
    int i = i + 1;
    int res = 0;
    while(i > 0)
    {
        res += bitTree[i];
        i = i - i & (-i);

    }
    return res;

}