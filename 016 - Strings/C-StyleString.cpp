// C - Style Strings 
// 1
#include<iostream>
using namespace std;

int main()
{
    char str[] = "mayank";
    cout << str;
    return 0;
}

// 2
#include<iostream>
using namespace std;

int main()
{
    char str[] = "mayank";
    cout << sizeof(str);
    return 0;
}

// 3
#include<iostream>
using namespace std;

int main()
{
    char str[] = {'g', 'f', 'g'};
    cout << str;
    return 0;
}

// 4
#include<iostream>
using namespace std;

int main()
{
    char str[] = {'g', 'f', 'g', '\0'};
    cout << str;
    return 0;
    
}

// 5 
#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[] = "abc";
    char s2[] = "bcd";
    int res = strcmp(s1, s2);
    if (res > 0)
        cout << "Greater";
    else if(res == 0)
        cout << "Same";
    else
        cout << "Smaller";
}

// 6

