#include <iostream>
using namespace std ;

void sum_row(int arr[][100],int row ,int coulmn){
    int sum = 0 ;
    for(int i = 0 ;i<row;i++){
        for(int j= 0 ;j<coulmn;j++){
            sum = sum +arr[i][j];
        }cout<<"SUM OF ROW"<<i<<"="<<sum<<endl ;
        
    }
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
    sum_row(arr,rows,column);
}