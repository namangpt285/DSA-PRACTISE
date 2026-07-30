#include <iostream>
using namespace std ;

int calculator(int a, int b, char op){
    switch(op){
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            cout << "Invalid operator";
            return 0;
    }
}

int main(){
    int a,b ;
    char op ;
    cout<<"Enter two numbers :";
    cin>>a>>b ;
    cout<<"Enter an operator (+,-,*,/) :";
    cin>>op ;
    cout<<"The result is :"<<calculator(a,b,op) ;
    return 0 ;
}