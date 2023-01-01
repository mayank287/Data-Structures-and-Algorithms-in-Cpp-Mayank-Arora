// Random   Number in Range
#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;



int main()
{
     srand(time(NULL));
    for(int i = 0; i < 5; i++)
        {
            cout <<  rand() % 100<< " ";
            
        }

    return 0;
}


// Programme  2  in Low and High Range 
#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;



int main()
{
     srand(time(NULL));
     int low = 10, high = 100;
     int range = high - low + 1;
     
    for(int i = 0; i < 5; i++)
        {
            cout <<  (rand() % range) + low  << " ";
            
        }

    return 0;
}
