// N queens problem
#include <bits/stdc++.h>
using namespace std;

#define N 4 
  
int board[N][N];  

void printSolution(int board[N][N]) 
{ 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            printf(" %d ", board[i][j]); 
        printf("\n"); 
    } 
} 
  
bool isSafe(int row, int col) 
{ 
  
    for (int i = 0; i < col; i++) 
        if (board[row][i]) 
            return false; 
  
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (board[i][j]) 
            return false; 
  
    for (int i = row, j = col; j >= 0 && i < N; i++, j--) 
        if (board[i][j]) 
            return false; 
  
    return true; 
} 
  
bool solveRec(int col) 
{ 
    if (col == N) 
        return true; 
  
    for (int i = 0; i < N; i++) { 
     
        if (isSafe(i, col)) { 
            board[i][col] = 1; 
  
            if (solveRec(col + 1)) 
                return true; 
  
            board[i][col] = 0;
        } 
    } 
  
    return false; 
} 
  
bool solve() 
{
    if (solveRec(0) == false) { 
        printf("Solution does not exist"); 
        return false; 
    } 
  
    printSolution(board); 
    return true; 
}

int main() {
	
	solve(); 
    return 0; 
	
}


// GFG Solution

class Solution{
public:
    bool isSafe(vector<vector<int>>board,int x,int y,int n)
    {
        for(int i = 0; i < x; i++)
        {
            if(board[i][y] == 1) return false;
        }
        
        int row = x,col = y;
        while(row >= 0 && col >=0)
        {
            if(board[row][col] == 1) return false;
            row--;
            col--;
        }
        
        row = x,col =y;
        while(row >= 0 && col < n)
        {
            if(board[row][col] == 1) return false;
            row--;
            col++;
        }
        
        return true;
        
    }


   
    void solve(int x, int n, vector<vector<int>> &board,vector<vector<int>>&result)
    {
        if(x == n)
        {
            vector<int> temp;
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(board[i][j] == 1)
                    {
                    temp.push_back(j + 1); 
                    }
                  }
            }
                result.push_back(temp);
                return;
        }
        
        for(int col = 0; col < n; col++)
        {
            if(isSafe(board,x,col,n))
            {
                board[x][col] = 1;
                solve(x+1,n,board,result);
                board[x][col] = 0;
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> result;
        vector<vector<int>> board(n,vector<int>(n,0));
        solve(0,n,board,result);
        sort(result.begin(),result.end());
        return result;
    }
}; 