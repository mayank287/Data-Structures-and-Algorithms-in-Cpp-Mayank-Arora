// Spiral Travesal In Matrix 
#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

const int R = 4, C = 4;

void printSpiral(int mat[4][4], int R, int C)
{
	int top = 0, left = 0, bottom = R - 1, right = C - 1;

	while(top <= bottom && left <= right)
	{
		for(int i = left; i <= right; i++)
			cout << mat[top][i] << " ";

		top++;

		for(int i = top; i <= bottom; i++)
			cout << mat[i][right] << " " ;
		
		right--;

		if(top <= bottom){
		for(int i = right; i >= left; i--)
			cout << mat[bottom][i] << " ";

		bottom--;
		}

		if(left <= right){
		for(int i = bottom; i >= top; i--)
			cout << mat[i][left] << " ";

		left++;
		}			
	}
}

int main()
{	
	int arr[R][C] = {{1, 2, 3, 4},
				    {5, 6, 7, 8},
				    {9, 10, 11, 12},
				    {13, 14, 15, 16}};

  printSpiral(arr, R, C);

	return 0;
}


// GFG Solution 

{   
    public: 
   
    vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    { 
        vector<int> ans;
        
       int top = 0, left = 0, bottom = r - 1, right = c - 1;
       
       while(top <= bottom && left <= right)
       {
           for(int i = left; i <= right; i++)
           {
               ans.push_back(arr[top][i]);
               
           }
           top++;
           
           
           for(int i = top; i <= bottom; i++)
           {
               ans.push_back(arr[i][right]);
               
           }
           right--;
           
           if(top <= bottom)
           {
               for(int i = right; i>= left; i-- )
               {
                   ans.push_back(arr[bottom][i]);
                   
               }
               bottom--;
               
           }
           
           
           
           if(left <= right)
           {
               for(int i = bottom; i >= top; i--)
               {
                   ans.push_back(arr[i][left]);
                   
               }
               
               left++;
               
           }
           
           
           
           
       }
       
       
           return ans;
    }
};