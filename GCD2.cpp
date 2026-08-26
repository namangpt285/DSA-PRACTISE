#include <iostream>
using namespace std;


int gcd(int n, int m)
{
    int dividend = n;
    int divisor = m;
    int rem;

    while (divisor != 0)
    {
        rem = dividend % divisor;
        dividend = divisor;
        divisor = rem;
    }

    return dividend;
}

int main()
{
    int n, m, HCF;

    cout << "ENTER TWO NUMBERS FOR GCD: ";
    cin >> n >> m;

    HCF = gcd(n, m);

    cout << "GCD OF TWO NUMBERS IS: " << HCF;

    return 0;
}