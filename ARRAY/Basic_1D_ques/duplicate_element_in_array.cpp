#include <iostream>
using namespace std;

void duplicate_element(int arr[], int size) {
    bool found = false;

    for (int i = 0; i < size - 1; i++) {
        bool printedForValue = false;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                if (!printedForValue) {
                    cout << "Duplicate data in array " << arr[i] << endl;
                    printedForValue = true;
                    found = true;
                }
            }
        }
    }

    if (!found) {
        cout << "no Duplicate data in array" << endl;
    }
}

int main(){
    int num[1000],size ;
    cout<<"Enter the size of array :";
    cin>>size ;
    cout<<"Enter the elements of array :";
    for(int i =0;i<size;i++){
        cin>>num[i] ;
    }
    duplicate_element(num,size) ;
    return 0 ;
}