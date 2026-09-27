#include <iostream>
using namespace std ;
bool ispalimdrome(string str ,int index = 0){
    if(2*index > str.length()-1){
        return true ;
    }else if(str[index] != str[str.length()-1-index]){
        return false ;
    }else{
        return ispalimdrome(str,index+1);
    }
}
int main(){
    string str ;
    cout<<"ENTER THE STRING : ";
    cin>>str;
    if(ispalimdrome(str)){
        cout<<"PALINDROME"<<endl;
    }else{
        cout<<"NOT PALINDROME"<<endl;
    }
    return 0;
}