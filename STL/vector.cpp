#include <iostream>
#include<vector>
using namespace std ;

int main(){
    vector<int> v;
    cout<<"Size of vector is :"<<v.size()<<endl;
    cout<<"Capacity of vector is :"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size of vector is :"<<v.size()<<endl;
    cout<<"Capacity of vector is :"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size of vector is :"<<v.size()<<endl;
    cout<<"Capacity of vector is :"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Size of vector is :"<<v.size()<<endl;
    cout<<"Capacity of vector is :"<<v.capacity()<<endl;
    cout<<"Element at index 2 is :"<<v.at(2)<<endl;
    cout<<"front element is :"<<v.front()<<endl;
    cout<<"back element is :"<<v.back()<<endl;
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";

    }cout<<endl;
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size before clear :"<<v.size()<<endl;
    v.clear();
    cout<<"size after clear :"<<v.size()<<endl;
    vector<int> v1(5,1);
    cout<<"printing v1"<<endl;
    for(int i:v1){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>last(v1);
    cout<<"printing last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;
}