#include <iostream>
using namespace std ;
int main(){
    int num = 5 ;
    int *ptr = &num;
    cout<<ptr<<endl ;
    cout<<"value is :"<<*ptr<<endl;
    cout<<"size of integer :"<<sizeof(num)<<endl;
    cout<<"size of pointer :"<<sizeof(ptr)<<endl;
    int *p;//create pointer which strore adress of garbage value or pointing to some garbage address;
    int*pc=0;
    cout<<pc<<endl;
    int a = num;
    a++;
    int *q=ptr ;
    cout<<num<<endl;
    cout<<ptr<<" "<<q<<endl;
    cout<<*ptr<<" "<<*q<<endl;
    ptr = ptr +1 ;
    cout<<ptr;
    return 0 ;
}