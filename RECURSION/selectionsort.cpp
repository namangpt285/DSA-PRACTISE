#include <iostream>
using namespace std ;

void selection_sort(int arr[],int size){
    if(size == 0 || size ==1){
        return ;
    }else{
        int min_index = 0 ;
        for(int i=1;i<size;i++){
            if(arr[i]<arr[min_index]){
                min_index = i ;
            }
        }
        swap(arr[0],arr[min_index]);
        selection_sort(arr+1,size-1);
    }
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
    selection_sort(arr,size);
    cout<<"SORTED ARRAY : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
    return 0;
}