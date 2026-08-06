#include <iostream>
#include<stack>
using namespace std ;
int main(){
    stack<string>s;
    s.push("Naman");
    s.push("Kumar");
    s.push("Gupta");
    cout<<"Top element is :"<<s.top()<<endl;
    s.pop();
    cout<<"Top element is :"<<s.top()<<endl;
    cout<<"Size of stack is :"<<s.size()<<endl;
    cout<<"Empty or not :"<<s.empty()<<endl;

}