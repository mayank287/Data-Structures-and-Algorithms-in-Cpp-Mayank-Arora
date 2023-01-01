// Design A Data structure that Support Following operations 
// insertMin(),insertMax(),getMin(),getMax(),extractmax(),extractmin()
#include <iostream>
#include<deque>
using namespace std;

deque <int> dq;

void insertMin(int x){
    dq.push_front(x);

}


void insertMax(int x){
    dq.push_back(x);

}

int getMin(){
    return dq.front();
}


int getMax(){
    return dq.back();

}


void extractMin(){
     dq.pop_front();

}

void  extractMax(){
     dq.pop_back();

}

int main(){
    insertMin(10);
    insertMax(20);
    insertMax(30);
    insertMin(8);
    insertMin(1);
    insertMax(100);
    extractMax();
    extractMin();
   cout <<  getMax() << endl;
    cout << getMin() << endl;

    return 0;



}