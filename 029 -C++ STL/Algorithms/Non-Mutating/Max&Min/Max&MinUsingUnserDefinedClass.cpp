// Min and Max using Unser Defined Class

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Point{
    int x;
    int y;
    Point(int i, int j){
        x=i;
        y=j;
        
    }
};


bool myCmp(Point p1, Point p2){
    return p1.x < p2.x;
    
}

int main()
{
    
vector<Point> v = {{5,4},{2,300},{90,10}};
auto it = max_element(v.begin() ,v.end(),myCmp);
cout << it -> x << " " << it -> y <<  endl;
it = min_element(v.begin(),v.end(),myCmp);
cout << it -> x << " "  << it -> y << endl;
   

  
    return 0; 
}


// O/P :- 2 ,300 
//       5,4


// It Give Preference To First Element that is x
