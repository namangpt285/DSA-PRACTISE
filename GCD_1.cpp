#include <iostream>
using namespace std;

int gcd(int n, int m)
{
    int i = 1;
    int GCD = 1;

    while (i <= n && i <= m)
    {
        if (n % i == 0 && m % i == 0)
        {
            GCD = i;
        }
        i++;
    }

    return GCD;
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