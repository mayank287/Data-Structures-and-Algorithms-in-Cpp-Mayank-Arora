// Longest Substring With Dittnc Character 
// Time Coplexity O(n3)
#include <bits/stdc++.h> 
using namespace std; 

bool areDistinct(string str, int i, int j) 
{ 

	vector<bool> visited(256); 

	for (int k = i; k <= j; k++) { 
		if (visited[str[k]] == true) 
			return false; 
		visited[str[k]] = true; 
	} 
	return true; 
} 

int longestDistinct(string str) 
{ 
	int n = str.length(); 
	int res = 0;
	for (int i = 0; i < n; i++) 
		for (int j = i; j < n; j++) 
			if (areDistinct(str, i, j)) 
				res = max(res, j - i + 1); 
	return res; 
} 

int main() 
{ 
	string str = "geeksforgeeks"; 
	int len = longestDistinct(str); 
	cout << "The length of the longest distinct characters substring is "<< len; 
	return 0; 
} 
