#include <iostream>
using namespace std ;

#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int choice = 1;

    while (choice <= 9) {
        switch (choice) {
            case 1:
                cout << "500 x " << amount / 500 << endl;
                amount %= 500;
                break;

            case 2:
                cout << "200 x " << amount / 200 << endl;
                amount %= 200;
                break;

            case 3:
                cout << "100 x " << amount / 100 << endl;
                amount %= 100;
                break;

            case 4:
                cout << "50 x " << amount / 50 << endl;
                amount %= 50;
                break;

            case 5:
                cout << "20 x " << amount / 20 << endl;
                amount %= 20;
                break;

            case 6:
                cout << "10 x " << amount / 10 << endl;
                amount %= 10;
                break;

            case 7:
                cout << "5 x " << amount / 5 << endl;
                amount %= 5;
                break;

            case 8:
                cout << "2 x " << amount / 2 << endl;
                amount %= 2;
                break;

            case 9:
                cout << "1 x " << amount / 1 << endl;
                amount %= 1;
                break;
        }
        choice++;
    }

    return 0;
}