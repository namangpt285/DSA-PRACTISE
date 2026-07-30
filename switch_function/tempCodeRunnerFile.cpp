#include <iostream>
using namespace std ;

int fact(int n ){
    int result = 1;
    for(int i =1;i <= n; i++){
        result *= i;
    }
    return result;
}

int nCr(int n ,int r){
    if(r>n){
        return 0 ;
    }
    else if(r==0||r==n){
        return 1 ;
    }
    else
       return fact(n) / (fact(r) * fact(n-r));
}
int main(){
    int n,r ;
    cout<<"Enter n and r :";
    cin>>n>>r ;
    cout<<"The value of "<<n<<"C"<<r<<" is :"<<nCr(n,r) ;
    return 0 ;
}