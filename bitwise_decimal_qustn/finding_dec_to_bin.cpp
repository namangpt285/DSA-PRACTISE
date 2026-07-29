#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter a number :";
    cin>>n ;
    cout<<"The binary representation of "<<n<<" is :";
    for(int i=31;i>=0;i--){
        cout<<((n>>i)&1) ;
    }
    return 0 ;
}