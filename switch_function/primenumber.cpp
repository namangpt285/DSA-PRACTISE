
#include <iostream>
using namespace std;

void prime_num(int n){
    if(n <= 1){
        cout << "Not Prime";
        return;
    }

    int i = 2;

    while(i < n){
        if(n % i == 0){
            cout << "Not Prime";
            return;
        }
        i++;
    }

    cout << "Prime";
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    prime_num(n);
    return 0;
}