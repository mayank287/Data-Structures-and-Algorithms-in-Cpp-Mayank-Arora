// Better Method To Generate the Number 
// Using srand() function
// srand(unsigned  int)
// time_t time(time_t *t) internal Working of time_t

#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;



int main()
{
     srand(time(NULL));
    for(int i = 0; i < 5; i++)
        {
            cout <<  rand() << " ";
            
        }

    return 0;
}

