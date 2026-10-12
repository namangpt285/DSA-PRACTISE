#include <iostream>
using namespace std ;
int inversion_count(int arr[] ,int size){
    int count = 0 ;
    for(int i=0 ; i<size-1 ; i++){
        for(int j=i+1 ; j<size ; j++){
            if(arr[i] > arr[j]){
                count++ ;
            }
        }
    }
    return count ;
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
    cout<<"INVERSION COUNT : "<<inversion_count(arr,size)<<endl;
    return 0;
}