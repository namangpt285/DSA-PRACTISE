#include <iostream>
using namespace std ;

void reverse(string &str, int index = 0){
    if(2*index > str.length()-1){
        cout<<str ;
    }else{
        swap(str[index], str[str.length()-1-index]);
        reverse(str, index+1);
        
    }

}
int main(){
    string str ;
    cout<<"ENTER THE STRING : ";
    cin>>str;
    reverse(str);
    return 0;
}