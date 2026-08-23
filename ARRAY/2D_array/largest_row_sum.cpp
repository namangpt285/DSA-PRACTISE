#include <iostream>
using namespace std;

int largest_sum_row(int arr[][100], int row, int column)
{
    int largest = 0;

    for(int i = 0; i < row; i++)
    {
        int sum = 0;

        for(int j = 0; j < column; j++)
        {
            sum = sum + arr[i][j];
        }

        if(sum > largest)
        {
            largest = sum;
        }
    }

    return largest;
}

int main()
{
    int rows, column;
    int arr[100][100];

    cout << "ENTER THE ROW SIZE: ";
    cin >> rows;

    cout << "ENTER THE COLUMN SIZE: ";
    cin >> column;

    cout << "ENTER ELEMENT OF ARRAY: ";

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }

    int largest_row = largest_sum_row(arr, rows, column);

    cout << "THE HIGHEST ROW SUM = " << largest_row;

    return 0;
}