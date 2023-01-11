// Solve the Sudoko 
class Solution 
{
    public:
    //Function to find a solved Sudoku.
    bool isSafe(int board[N][N],int row, int col, int num) 
    { 
     
        for (int d = 0; d < N; d++)  
        { 
            
            if (board[row][d] == num) { 
                return false; 
            } 
        } 
  
        for (int r = 0; r < N; r++)  
        { 
               
            if (board[r][col] == num)  
            { 
                return false; 
            } 
        }  
        int s = (int)sqrt(N); 
        int boxRowStart = row - row % s; 
        int boxColStart = col - col % s; 
  
        for (int r = boxRowStart; 
             r < boxRowStart + s; r++)  
        { 
            for (int d = boxColStart; 
                 d < boxColStart + s; d++)  
            { 
                if (board[r][d] == num)  
                { 
                    return false; 
                } 
            } 
        } 
  
        return true; 
    } 
    
   bool solve(int board[N][N],int n) 
{ 
	    int row = -1; 
        int col = -1; 
        bool isEmpty = true; 
        for (int i = 0; i < n; i++)  
        { 
            for (int j = 0; j < n; j++)  
            { 
                if (board[i][j] == 0)  
                { 
                    row = i; 
                    col = j; 
                    isEmpty = false; 
                    break; 
                } 
            } 
            if (!isEmpty) { 
                break; 
            } 
        } 
  
        if (isEmpty)  
        { 
            return true; 
        } 
        
        for (int num = 1; num <= n; num++)  
        { 
            if (isSafe(board, row, col, num))  
            { 
                board[row][col] = num; 
                if (solve(board, n))  
                { 
 
                    return true; 
                } 
                else 
                { 
                    board[row][col] = 0; 
                } 
            } 
        } 
        return false; 
} 
    
    bool SolveSudoku(int grid[N][N])  
    { 
       return solve(grid, N);
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cout << grid[i][j] << " ";
                
            }
        }
    }
};