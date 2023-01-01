#include <iostream>
using namespace std;

void printsubsets(string str, string curr = "",int index =0){
    if(index == str.length())
{


    cout << curr << " ";
    return;
}    
    
    printsubsets(str,curr,index+1);
    printsubsets(str,curr+str[index],index+1);
    
    
}





int main() {
   printsubsets("ma");

    return 0;
}