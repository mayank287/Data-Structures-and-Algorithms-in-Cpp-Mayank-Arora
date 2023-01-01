// Intro To Pairs
#include<iostream>
#include <utility>
using namespace std;

int main()
{
  // Method 1:-  // pair <int,int> p1; give output = 0 0
  // Method 2:-  // pair <int,int> p1(10,20); give output = 10,20
    
    pair <int,int> p1;
 // Method 3:-  // p1 = {10,20};
 // or
    
   // Method 4:-  p1 = make_pair(10,20);

    pair<int,string> p2(10,"Mayank Arora");
    cout << p1.first << " " << p1.second << endl;
    
    cout << p2.first << " " << p2.second;
    
    return 0;
}