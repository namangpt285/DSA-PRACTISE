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
        cout << "this->" << this << endl ;
        this->health = health ;
     }
     Hero(int health, char level){
        this->health = health ;
        this->level = level ;
     }


     void print(){
         cout <<"level: " <<this->level << endl ;
         cout << "health: " << this->health << endl ;
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
    Hero ramesh(10);
    ramesh.print();
    cout<<"adress of ramesh is : "<<&ramesh<<endl;
    cout<<"Hello"<<endl;
    //dynamicalyy
    Hero *h = new Hero(19) ;
    cout<<endl;
    Hero temp(22,'B');
    temp.print();


}