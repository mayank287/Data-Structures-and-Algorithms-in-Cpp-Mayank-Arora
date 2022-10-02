// Pop, Size and Begin function in Deque

#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq = {10,15,30,5,12};
    auto it = dq.begin();
    it++;
    dq.insert(it,20);
    dq.pop_front();
    dq.pop_back();
    cout << dq.size() << endl;


     return 0;
             
}
