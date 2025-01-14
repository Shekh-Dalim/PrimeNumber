/********** Q: 4: Prime Number ********/

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0; // Not Prime
        }
    }
    return 1; // Prime
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (isPrime(n))
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not a Prime number";
    }

    return 0;
}