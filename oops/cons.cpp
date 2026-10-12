#include <iostream>
using namespace std ;

class Hero{
     private :
     int health ;
     public :
     char level ;
     Hero(){
        cout << "Constructor called" << endl ;
     }
     Hero(int health){
        cout << "Parameterized constructor called" << endl ;
        this->health = health ;
     }


     void print(){
         cout << level << endl ;
     }
     int getHealth(){
         return health ;
     }
     char getLevel(){
         return level ;
     }
     void setHealth(int h){
         health = h ;
     }
     void setLevel(char ch){
         level = ch ;
     }
};

int main(){
    //object creation statically
    cout<<"hi"<<endl;
    Hero ramesh;
    cout<<"Hello"<<endl;
    //dynamicalyy
    Hero *h = new Hero ;

}