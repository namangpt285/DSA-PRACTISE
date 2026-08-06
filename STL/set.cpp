#include <iostream>
#include<set>
using namespace std ;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(0);
    s.insert(1);
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of set is :"<<s.size()<<endl;
    cout<<"Empty or not :"<<s.empty()<<endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<s.count(1)<<endl;
    set<int>::iterator itr = s.find(2);
    cout<<"The value found is :"<<*itr<<endl;
    for(auto it = itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

}