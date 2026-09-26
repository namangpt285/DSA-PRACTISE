#include <iostream>
using namespace std ;
bool linearsearch(int arr[], int size, int key){
    if(size ==0 ){
        return false ;
    }if(arr[0]==key){
        return true ;
    }
    return linearsearch(arr+1, size-1, key);
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
    cout<<linearsearch(arr, size, key)<<endl;
    return 0;
}