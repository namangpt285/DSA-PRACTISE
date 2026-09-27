#include <iostream>
using namespace std ;
int sum_element(int arr[],int size){

    if(size == 0){
        return 0 ;
    }else
    {
        return arr[size-1] + sum_element(arr,size-1);
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
    cout<<sum_element(arr,size)<<endl;
    return 0;
}