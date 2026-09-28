#include <iostream>
using namespace std ;
void insert(int arr[], int i, int key){
    if(i < 0 || arr[i] <= key){
        arr[i + 1] = key;
        return;
    }

    arr[i + 1] = arr[i];

    insert(arr, i - 1, key);
}

void INSERTION_SORT(int arr[], int size, int i = 1){
    if(i == size)
        return;

    int key = arr[i];

    insert(arr, i - 1, key);

    INSERTION_SORT(arr, size, i + 1);
}
int main(){
    int size ;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>size ;
    int arr[size] ;
    cout<<"ENTER THE ELEMENTS OF ARRAY : ";
    for(int i=0;i<size;i++){
        cin>>arr[i] ;
    }
    INSERTION_SORT(arr,size);
    cout<<"SORTED ARRAY : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
    return 0;
}