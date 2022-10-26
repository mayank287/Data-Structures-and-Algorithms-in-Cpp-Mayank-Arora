// Pirint all Divisors 
// Time Complexity o(sqrt(n))

// Method - 1 (Unordered)

    #include <iostream>
    using namespace std;

    void printDivisord(int n)
    {
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0 )
        {
            cout << i << " " ;
            if(i != n/i)
            {
                cout << n/i << " ";
                
            }
        }
    }
    }

    int main()
    {
    cout << "Enter the Number To Get Divisor" << endl;
    int n;
    cin >> n;
    
    
    printDivisord(n);
    
    
        return 0;
    }



