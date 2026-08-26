
#include <iostream>
using namespace std ;

int LCM(int n, int m)
{
    int i = 1;
    int LCM = 1;

    while(i <= n * m)
    {
        if(i % n == 0 && i % m == 0)
        {
            LCM = i;
            break;
        }

        i++;
    }

    return LCM;
}

int main()
{
    int n, m, lcm;

    cout << "ENTER TWO NUMBERS FOR LCM: ";
    cin >> n >> m;

    lcm = LCM(n, m);

    cout << "LCM OF TWO NUMBERS IS: " << lcm;

    return 0;
}