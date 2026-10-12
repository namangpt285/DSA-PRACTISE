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
     //copy constructor
     Hero(Hero &temp){
        cout << "Copy constructor called" << endl ;
        this->health = temp.health ;
        this->level = temp.level ;
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
    Hero suresh(70,'c') ;
    

    Hero ritesh(suresh) ; // copy constructor called
    ritesh.print() ;


}