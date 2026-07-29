
#include <iostream>
using namespace std; 
int main() {
    int i = 1, j;
    while (i <= 5) {
        j = 1;
        while (j <= 6 - i) {
            cout << j;
            j++;
        }
        j = 1;
        while (j <= 2 * (i - 1)) {
            cout << "*";
            j++;
        }
        j = 6 - i;
        while (j >= 1) {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}