#include <iostream>
using namespace std ;


void update(int n ){
    n++;
}
void update2(int &n ){
    n++;
}
int main(){
    int i = 5 ;
    int &j = i ; // j is reference variable of i
    cout<<"value of i is :"<<i<<endl;
    i++;
    cout<<"value of i is :"<<i<<endl;
    j++;
    cout<<"value of i is :"<<i<<endl;
    cout<<"value of j is :"<<j<<endl;
    int n = 5;
    cout<<"before update function value of n is :"<<n<<endl;
    update(n);
    cout<<"after update function value of n is :"<<n<<endl; 
    update2(n);
    cout<<"after update2 function value of n is :"<<n<<endl; 
}