#include <iostream>
using namespace std ;
int Bubble_sort(int arr[],int size){
    for(int i =0;i<size-1;i++){
        if(arr[i]<arr[i+1]){
            swap(arr[i+1],arr[i]);
        }else{
            return;
        }

    }return arr[size];

}