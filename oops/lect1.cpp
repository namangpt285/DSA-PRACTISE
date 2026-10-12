#include <iostream>
using namespace std ;
#include "Hero.cpp"




int main(){
    // create object of hero class 
    // static allocation
    Hero h1;
    // dynamic allocation
    Hero *h2 = new Hero ;
    h2->health = 80 ;
    h2->level = 'B' ;
    cout<<"level of h2 is :"<<(*h2).level<<endl;
    cout<<"health of h2 is :"<<(*h2).health<<endl;
    h1.health = 70 ;
    h1.level = 'A' ;
    // cout << "Size of h1 is : " << sizeof(h1) << endl ; // 105
    cout<<"level of h1 is : "<<h1.level<<endl;
    cout<<"health of h1 is : "<<h1.health<<endl;
    return 0 ;

}