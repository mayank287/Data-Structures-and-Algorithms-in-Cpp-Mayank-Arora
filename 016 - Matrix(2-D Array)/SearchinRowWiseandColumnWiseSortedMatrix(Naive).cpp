// Search an Element in a row-wise and column-wise sorted matrix (Nauve)
// Time Complexity O(R * C)
#include <iostream>
using namespace std;


const int R = 4, C = 4;

void search(int mat[R][C], int x)
{
    
    for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            if(mat[i][j] == x)
            {
                cout << "Found" <<  " " <<  i << " " << j << endl;
                return;
                
                
            }
        }
    }
    
    cout << "Not Found" << endl;
    
    
}


int main()
{
   
     int arr[R][C] = {{10, 20, 30, 40},
    			   {15, 25, 35, 45},
    			   {27, 29, 35, 45},
    			   {32, 33, 39, 50}};
			   
	 int x = 29;	   

	 search(arr, x);


    return 0;
}
