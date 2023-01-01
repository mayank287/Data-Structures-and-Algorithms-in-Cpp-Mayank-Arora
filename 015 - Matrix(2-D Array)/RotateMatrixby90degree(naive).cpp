// Rotate The Matrix By 90 Degree (Naive)
// Time and Space O(n2) Both

#include <iostream>
using namespace std;

const int n = 4;

void rotate90(int mat[n][n])
{
    int temp[n][n];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            temp[n - j - 1][i] = mat[i][j];
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            mat[i][j] = temp[i][j];
            
        }
    }
    
    
}


int main()
{
	int arr[n][n] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};

    rotate90(arr);

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}	
    return 0;
}
