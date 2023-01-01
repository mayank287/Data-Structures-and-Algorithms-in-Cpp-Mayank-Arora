// Passing Matrix To Function Using Vectors of Vectors 
#include <iostream>
#include<vector>

using namespace std;

void print(vector<vector<int>> &arr)
{
	for(int i = 0; i < arr.size(); i++)
	{
		for(int	j = 0; j < arr[i].size(); j++)
			cout << arr[i][j] << " ";
	}
}

int main()
{	
	int m = 3, n = 2;

	vector<vector<int>> arr;

	for(int i = 0; i < m; i++)
	{
		vector<int> v;

		for(int j = 0; j < n; j++)
		{
			v.push_back(i);
		}

		arr.push_back(v);
	}

	print(arr);

	return 0;
}