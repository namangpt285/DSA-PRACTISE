#include <iostream>
using namespace std ;
void update(int **p){
    //p = p+1 ;//no change
    //*p = *p+1;
    **p=**p+1;
}
int main(){
    int i = 5 ;
    int*p = &i;
    int **p2 = &p;
    cout<<"printing p:"<<p<<endl;
    cout<<"adress of p is :"<<&p<<endl;
    cout<<"adress of i :"<<*p2<<endl;
    cout<<"value of i is :"<<**p2<<endl; 
    cout<<"value of i is :"<<*p<<endl;
    cout<<"value of i is :"<<i<<endl;

    cout<<"before"<<i<<endl;
    cout<<"before"<<p<<endl;
    cout<<"before"<<p2<<endl;
    update(p2);
    cout<<"after"<<i<<endl;
    cout<<"after"<<p<<endl;
    cout<<"after"<<p2<<endl;


}