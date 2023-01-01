// assign and remove function in forward list in c++ slt

// Sample Program 1
#include <iostream>
#include<forward_list>

using namespace std;

int main()
{
  forward_list<int> l;
  l.assign({10,20,30,10});
  l.remove(10);
  
  for(auto it = l.begin(); it != l.end(); it++){
      cout << *(it) << endl;
      
  }
  

  

    return 0;
}

 
// Sample Program 2 
#include <iostream>
#include<forward_list>

using namespace std;

int main()
{
  forward_list<int> l;
  l.assign({10,20,30,10});
  forward_list<int> l2; // we assign values of 1st to 2nd 
  l2.assign(l.begin(),l.end());
  


  for(auto x:l2){
      cout << x << endl;
      
  }
  

    return 0;
}
// O/P :- 10,20,30,10


// Sample Program 3
#include <iostream>
#include<forward_list>

using namespace std;

int main()
{


  forward_list<int> l;
  // We here Assign how many time particular element comes in list 
  l.assign(5,10);
  
  


  for(auto x:l){
      cout << x << endl;
      
  }
     return 0;
}

// O/P 10 10 10 10 10
