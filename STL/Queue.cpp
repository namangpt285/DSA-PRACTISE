#include <iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("Naman");
    q.push("Kumar");
    q.push("Gupta");
    cout<<"Size of queue is :"<<q.size()<<endl;
    cout<<"Front element is :"<<q.front()<<endl;
    cout<<"Back element is :"<<q.back()<<endl;
    q.pop();
    cout<<"Size of queue after pop is :"<<q.size()<<endl;
    cout<<"Front element after pop is :"<<q.front()<<endl;
    cout<<"Back element after pop is :"<<q.back()<<endl;
}