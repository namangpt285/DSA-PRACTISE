
#include <iostream>
using namespace std;

bool Linear_search(int arr[][100], int rows, int column, int key)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(arr[i][j] == key)
            {
                return true;
            }
        }
    }

    return false;
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

    bool found = Linear_search(arr, rows, column, 9);

    if(found)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }
}