// Implement Two Stacks In Array
// We Push Element of First Stack from frontside of array and for Second Stack we insert Element from end 
// Function to push an integer into the stack1.
// Time Complexity o(1);
#include <bits/stdc++.h>
using namespace std;
class twoStacks{
    int size;
    int top1,top2;
    int *arr;

  public:
  twoStacks(int  n){
  size =n;
  top1 = 1;
  top2 = size;
  arr = new arr[n];



  }

  void push1(int x);
  void push2(int x);
  int pop1();
  int pop2();


}



void twoStacks :: push1(int x)
{
 if(top1 < top2 - 1 ) {
     top1++;
     arr[top1] = x;
     
     
     
     
 };




}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
if(top1 < top2 - 1){
    top2--;
    arr[top2] = x;
}



}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
if(top1  >= 0){
    int value = arr[top1];
    top1--;
    return value;
}
else{
    return -1;
}




}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
if(top2 <  size){
    int value = arr[top2];
    top2++;
    return value;
    
} else{
    return -1;
}



}