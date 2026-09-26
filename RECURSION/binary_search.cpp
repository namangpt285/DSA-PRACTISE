#include <iostream>
using namespace std ;

int binarysearch(int arr[], int size, int key, int s = 0, int end = -1){
    
    if(end == -1){
        end = size - 1;
    }

    if(s > end){
        return -1;
    }

    int mid = s + (end - s) / 2;

    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] < key){
        return binarysearch(arr, size, key, mid + 1, end);
    }
    else{
        return binarysearch(arr, size, key, s, mid - 1);
    }
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
    cout<<"ENTER THE KEY TO BE SEARCHED : ";
    int key ;
    cin>>key;
    cout<<binarysearch(arr, size, key)<<endl;
    return 0;
}