#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(9);
    v.push_back(41);
    v.push_back(50);

   cout<<binary_search(v.begin(),v.end(),9)<<endl;
   //finding iterator of 9
   cout<<lower_bound(v.begin(),v.end(),9)-v.begin()<<endl;
   cout<<upper_bound(v.begin(),v.end(),9)-v.begin()<<endl;
   int a = 10;
   int b = 20;
   cout<<"max is :"<<max(a,b)<<endl;
    cout<<"min is :"<<min(a,b)<<endl;
    cout<<"swap a and b"<<endl;
    swap(a,b);
    cout<<"a is :"<<a<<endl;
    cout<<"b is :"<<b<<endl;
    string str = "Naman";
    reverse(str.begin(),str.end());
    cout<<"reversed string is :"<<str<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotating the vector is :"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"after sorting the vector is :"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}