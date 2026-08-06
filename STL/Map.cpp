#include <iostream>
#include<map>
using namespace std ;

int main(){
    map<string,int> m;
    m["Naman"] = 1;
    m["Kumar"] = 2;
    m["Gupta"] = 3;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    m.insert({{"Naman",4},{"Kumar",5}});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<"finding Naman :"<<m.find("Naman")->second<<endl;
    m.erase("Kumar");
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it = m.find("Gupta");
    for(auto i=it;i!=m.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
}