#include <iostream>
using namespace std;
int main(){
    int i ,j ;
    for(i=0;i<4;i++){
        for(j=i+1;j>=1;j--){
            cout<<j ;
        }
        cout<<endl ;
    }
    return 0 ;
}