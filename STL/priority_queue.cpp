#include <iostream>
#include<queue>
using namespace std ;
int main(){
    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    cout<<"Size of priority queue is :"<<pq.size()<<endl;
    int n = pq.size();
    for(int i = 0;i<n;i++){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<"Size of priority queue is :"<<pq.size()<<endl;
    cout<<"Top element is :"<<pq.top()<<endl;
    pq.pop();
    cout<<"Size of priority queue after pop is :"<<pq.size()<<endl;
    cout<<"Top element after pop is :"<<pq.top()<<endl;
    priority_queue<int,vector<int>,greater<int>>min;
    min.push(1);
    min.push(2);
    min.push(3);
    cout<<"Size of minimum priority queue is :"<<min.size()<<endl;
    int m = min.size();
    for(int i = 0;i<m;i++){
        cout<<min.top()<<" ";
        min.pop();
    }
    cout<<"Size of minimum priority queue is :"<<min.size()<<endl;
    cout<<"empty or not :"<<min.empty()<<endl;
}