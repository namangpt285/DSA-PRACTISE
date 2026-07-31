#include <iostream>
using namespace std ;
void linear_search(int arr[], int size, int Key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == Key) {
            cout << "Key is present in array at index: " << i << endl;
            return;
        }
    }
    cout << "Key is not present in array" << endl;
}

int main(){
    int num[1000],size,Key ;
    cout<<"Enter the size of array :";
    cin>>size ;
    cout<<"Enter the elements of array :";
    for(int i =0;i<size;i++){
        cin>>num[i] ;
    }
    cout<<"Enter the key to be searched :";
    cin>>Key ;
    linear_search(num,size,Key) ;
}