// Rate in Maze Problem 
class Solution{
    public:
    vector<string> ans;
    void solve(int i,int j,vector<vector<int>> &m,int n,string s)
    {
        if(i < 0 || i >= n || j < 0 || j >= n || m[i][j] == 0) return;
        if(i == n - 1 && j == n - 1)
        {
            ans.push_back(s);
            s = "";
            return;
        }
        
        
        m[i][j] = 0;
        solve(i,j+1,m,n,s + "R");
        solve(i,j-1,m,n,s + "L");
        solve(i+1,j,m,n,s + "D");
        solve(i-1,j,m,n,s + "U");
        m[i][j] = 1;
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
    
      string s = "";
      if(m[0][0] == 0) return {};
      if(m[n - 1][n - 1] == 0) return {};
      solve(0,0,m,n,s);
      return ans;
    
    }
};

#include <bits/stdc++.h>
using namespace std;

#define N 4 
  
bool solveMazeRec( 
    int maze[N][N], int x, 
    int y, int sol[N][N]); 
  
void printSolution(int sol[N][N]) 
{ 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            printf(" %d ", sol[i][j]); 
        printf("\n"); 
    } 
} 
  
bool isSafe(int maze[N][N], int i, int j) 
{  
    return ( i < N && j < N && maze[i][j] == 1);
} 
 
bool solveMaze(int maze[N][N]) 
{ 
    int sol[N][N] = { { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 } }; 
  
    if (solveMazeRec(maze, 0, 0, sol) == false) { 
        printf("Solution doesn't exist"); 
        return false; 
    } 
  
    printSolution(sol); 
    return true; 
} 

bool solveMazeRec( int maze[N][N], int i, int j, int sol[N][N]) 
{ 
    if ( i == N - 1 && j == N - 1 && maze[i][j] == 1) { 
        sol[i][j] = 1; 
        return true; 
    } 
  
    if (isSafe(maze, i, j) == true) { 
        sol[i][j] = 1; 
  
        if (solveMazeRec(maze, i + 1, j, sol) == true) 
            return true; 
  
        if (solveMazeRec(maze, i, j + 1, sol) == true) 
            return true; 
  
        sol[i][j] = 0; 
    } 
  
    return false; 
}

int main() {
	
	int maze[N][N] = { { 1, 0, 0, 0 }, 
                       { 1, 1, 0, 1 }, 
                       { 0, 1, 0, 0 }, 
                       { 1, 1, 1, 1 } }; 
  
    solveMaze(maze);    
    return 0;  
	
}