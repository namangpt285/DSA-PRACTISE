#include <iostream>
using namespace std ;
int power(int n ){
    if(n==0){
        return 1 ;
    }else 
    return 2 * power(n-1);
}
int main(){
    int n ;
    cout<<"ENTER THE POWER NUMBER : ";
    cin>>n;
    cout<<"2^"<<n<<" IS : "<<power(n)<<endl;
    return 0 ;
}