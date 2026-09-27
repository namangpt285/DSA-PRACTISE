#include <iostream>
using namespace std ;


void bubble_sorting(int arr[], int size, int i = 0){

    if(size == 0 || size == 1){
        return;
    }

    if(i == size - 1){
        bubble_sorting(arr, size - 1, 0);
        return;
    }

    if(arr[i] > arr[i + 1]){
        swap(arr[i], arr[i + 1]);
    }

    bubble_sorting(arr, size, i + 1);
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
    bubble_sorting(arr,size);
    cout<<"SORTED ARRAY : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
    return 0;

}