// Different Method of Traversing String


#include <iostream>
using namespace std;

int main()
{

string str = "mayank";
for(int i = 0; i < str.length(); i++){
  cout << str[i];
  
}
cout << endl;
for(char x :str)
{
    cout << x << " ";
}


cout << endl;


for(auto it = str.begin(); it != str.end(); it++){
    cout << *it << " ";
}


}
