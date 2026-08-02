#include <iostream>
using namespace std;

void swap_alternate(int arr[], int size) {
    for (int i = 0; i + 1 < size; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int num[1000];
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    if (size < 0 || size > 1000) {
        cerr << "Invalid size. Must be between 0 and 1000." << endl;
        return 1;
    }

    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    swap_alternate(num, size);

    cout << "The array after swapping alternate elements is: ";
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}