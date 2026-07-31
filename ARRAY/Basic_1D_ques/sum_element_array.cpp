#include <iostream>
using namespace std ;

int sum_ele(int arr[],int size){
    int sum = 0 ;
    for(int i =0;i<size;i++){
        sum = sum +arr[i] ;


    }return sum ;
}
int main(){
    int num[1000],size ;
    cout<<"Enter the size of array :";
    cin>>size ;
    cout<<"Enter the elements of array :";
    for(int i =0;i<size;i++){
        cin>>num[i] ;
    }
    cout<<"The sum of elements of array is :"<<sum_ele(num,size) ;

}
