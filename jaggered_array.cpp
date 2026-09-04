#include <iostream>
using namespace std;

int main() {
    int row;

    cout << "ENTER THE ROWS: ";
    cin >> row;


    int **arr = new int*[row];


    int *colSize = new int[row];

    for (int i = 0; i < row; i++) {
        cout << "Enter the number of columns for row " << i << ": ";
        cin >> colSize[i];

        arr[i] = new int[colSize[i]];

        for (int j = 0; j < colSize[i]; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nJagged Array:\n";

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colSize[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }

    delete[] arr;
    delete[] colSize;

    return 0;
}