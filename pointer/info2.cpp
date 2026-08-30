#include <iostream>
using namespace std ;
int main(){
    int arr[10]={23,13,2,67};
    cout<<"adress of first memory block is :"<<arr<<endl;
    cout<<"adress of first memory block is :"<<&arr[0]<<endl;
    cout<<"4th:"<<*arr<<endl;
    cout<<"5th:"<<*arr+1<<endl;//=cout<<"7th:"<<*(arr)+1<<endl;
    cout<<"6th:"<<*(arr+1)<<endl;
    int i = 3;
    cout<<i[arr]<<endl;
    int temp[10];
    cout<<sizeof(temp)<<endl;
    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    //char arrays
    int arr1[5]= {1,2,3,4,5};
    char ch[6] = "abcde" ;
    cout<<arr1<<endl;
    cout<<ch<<endl;
    char *c = &ch[0];
    cout<<c<<endl;   
    char temp1 = 'z';
    char *p1 = &temp1 ;
    cout <<p1<<endl;

 

    return 0 ;
}