// Largest Rectangular Area With all 1's
#include <bits/stdc++.h>
using namespace std;

#define R 4 
#define C 4

int largestHist(int arr[],int n) 
{ 
    stack<int> result; 
    int top_val; 
    int max_area = 0;  
    int area = 0; 
    int i = 0; 
    while (i < n) { 
        if (result.empty() || arr[result.top()] <= arr[i]) 
            result.push(i++); 
  
        else {  
            top_val = arr[result.top()]; 
            result.pop(); 
            area = top_val * i; 
  
            if (!result.empty()) 
                area = top_val * (i - result.top() - 1); 
            max_area = max(area, max_area); 
        } 
    } 
    while (!result.empty()) { 
        top_val = arr[result.top()]; 
        result.pop(); 
        area = top_val * i; 
        if (!result.empty()) 
            area = top_val * (i - result.top() - 1); 
  
        max_area = max(area, max_area); 
    } 
    return max_area; 
}

int maxRectangle(int mat[][C]) 
{ 
    int res = largestHist(mat[0],C); 
  
    for (int i = 1; i < R; i++) { 
  
        for (int j = 0; j < C; j++) 
            if (mat[i][j]) 
                mat[i][j] += mat[i - 1][j]; 

        res = max(res, largestHist(mat[i],C)); 
    } 
        return res;
}

int main() 
{ 
    int mat[][C] = { 
        { 0, 1, 1, 0 }, 
        { 1, 1, 1, 1 }, 
        { 1, 1, 1, 1 }, 
        { 1, 1, 0, 0 }, 
    }; 
  
    cout << "Area of maximum rectangle is " << maxRectangle(mat); 
  
    return 0;  
}


// GFG Solution 
class Solution{
  public:
    int LargestHist(int arr[], int n)
    {
       stack<int> s;
       int res = 0;
       int tp,curr;
       
       for(int i = 0; i < n; i++)
       {
           while(!s.empty() && arr[s.top()] >= arr[i])
           {
               tp = s.top();
               s.pop();
               curr = arr[tp] * (s.empty() ? i: i - s.top() - 1);
               res = max(res,curr);
           }
           s.push(i);
       }
       
       while(!s.empty())
       {
           tp = s.top();
           s.pop();
           curr = arr[tp] * (s.empty() ? n : n - s.top() - 1);
           res = max(res,curr);
           
       }
       
       return res;
       
    }
    int maxArea(int m[MAX][MAX], int n, int c) {
        int res = LargestHist(m[0],c);
        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(m[i][j] == 1)
                {
                    m[i][j] += m[i - 1][j];
                }
            }
            res = max(res,LargestHist(m[i],c));
        }
        
        return res;
    }
};