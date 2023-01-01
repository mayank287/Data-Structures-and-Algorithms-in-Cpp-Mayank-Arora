// Egg Drop Puzzle 
// Recursive Solution 
#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    return a > b ?  a :  b;
    
}

int eggDrop(int eggs, int floors)
{
    if(floors == 1 || floors == 0) return floors;
    if(eggs == 1) return floors;
    
    int min = INT_MAX,x,res;
    for(int x = 1; x <= floors; x++)
    {
        res = max(eggDrop(eggs - 1,x- 1),eggDrop(eggs,floors - x));
        if(res < min) min = res;
    }
    
    return min + 1;
}




int main() {
  
    cout << eggDrop(2,10) << endl;

    return 0;
}