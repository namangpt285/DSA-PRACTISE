#include <iostream>
using namespace std ;
bool issorted(int arr[], int size, int i=0){
    if(i == size -2){
        return true ;
    }if(arr[i]>arr[i+1]){
        return false ;
    }
    return issorted(arr, size, i+1);
}
int main(){
    int arr[1000];
    cout<<"ENTER THE SIZE OF ARRAY : ";
    int size ;
    cin>>size;
    cout<<"ENTER THE ELEMENTS OF ARRAY : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<issorted(arr, size)<<endl;
    return 0;
}