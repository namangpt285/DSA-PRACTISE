#include <iostream>
using namespace std ;

class Human{
    public :
    int height;
    int weight ;
    int age ;

    public :
    int getAge(){
        return this->age ;
    }
    int setweight(int w){
        weight = w ;
        return weight ;
    }


};

class Male :public Human{
    public :
    string color ;

    void sleep(){
        cout<<"Male sleeping "<<endl;
    }

};
int main(){
    Male m1 ;
    m1.height = 6 ;
    m1.setweight(80);
    m1.age = 25 ;
    cout<<"Height of Male is : "<<m1.height<<endl;
    cout<<"Weight of Male is : "<<m1.weight<<endl;
    cout<<"Age of Male is : "<<m1.getAge()<<endl;
    m1.sleep();
}
