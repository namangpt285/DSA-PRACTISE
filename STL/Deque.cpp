#include <iostream>
#include<deque>
using namespace std ;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
d.pop_back();
for(int i:d){
    cout<<i<<"";
}
 d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
d.pop_front();
for(int i:d){
    cout<<i<<" ";

}
cout<<"PRint second element :"<<d.at(1)<<endl;
cout<<"before erase size of deque is :"<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"after erase size of deque is :"<<d.size()<<endl;
}