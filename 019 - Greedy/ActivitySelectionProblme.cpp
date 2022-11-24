// Activity Selection Problem
// Time Complexity O(nlogn)
#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
using namespace std;

bool myCmp(pair <int, int> a, pair <int, int> b)
{
	return (a.second < b.second);
}

int maxActivities(pair <int, int> arr[], int n)
{
	sort(arr, arr + n, myCmp);

	int prev = 0;
	int res = 1;

	for(int curr = 1; curr < n; curr++)
	{
	 
		if(arr[curr].first >= arr[prev].second)
		{
			res++;

			prev = curr;
		}
	}

	return res;
}
int main()
{
	pair <int, int> arr[] = {make_pair(5, 7), make_pair(3, 5)};

	int n = 2;

	cout<<maxActivities(arr, n); 

	return 0;
}