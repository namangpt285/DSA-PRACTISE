#include <iostream>
using namespace std ;
int factorial(int n){
    if(n==0){
        return 1 ;
    }
    else 
    return n*factorial(n-1);

}
int main(){
    int n ;
    cout<<"ENTER THE FACTORIAL NUMBER : ";
    cin>>n;
    cout<<"FACTORIAL OF "<<n<<" IS : "<<factorial(n)<<endl;
    return 0 ;
}