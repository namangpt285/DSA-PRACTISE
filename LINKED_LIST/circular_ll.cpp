#include <iostream>
using namespace std ;

class Node{
    public :
    int data ;
    Node* next ;

    Node(int d){
        this->data = d ;
        this->next = NULL ;
    }

    ~Node(){
        int value = this->data ;

        if(this->next != NULL){
            delete next ;
            next = NULL ;
        }

        cout<<"This memory is free for node with data "<<value<<endl ;
    }
};

void insertNode(Node* &tail ,int element ,int d ){

    // assuming that the element is present in the list

    // empty list
    if(tail == NULL){

        Node* newNode = new Node(d) ;

        tail = newNode ;
        newNode->next = newNode ;

    }
    else{

        // non empty list
        Node* curr = tail ;

        while(curr->data != element){
            curr = curr->next ;
        }

        // element found, curr is on that element
        Node* temp = new Node(d) ;

        temp->next = curr->next ;
        curr->next = temp ;
    }
}

void print(Node* tail){

    if(tail == NULL){
        cout<<"List is empty"<<endl ;
        return ;
    }

    Node* temp = tail ;

    do{
        cout<<temp->data<<" " ;
        temp = temp->next ;
    }while(temp != tail) ;

    cout<<endl ;
}
void deleteNode(Node* &tail, int value){

    // empty list
    if(tail == NULL){
        cout<<"LIST IS EMPTY, PLEASE CHECK AGAIN"<<endl ;
        return ;
    }

    // non-empty list

    Node* prev = tail ;
    Node* curr = tail->next ;

    // searching for the node
    while(curr->data != value){

        prev = curr ;
        curr = curr->next ;

        if(curr == tail->next){
            cout<<"Value not found"<<endl ;
            return ;
        }
    }

    // only one node
    if(curr == prev){
        tail = NULL ;
    }
    else{

        prev->next = curr->next ;

        // deleting the tail node
        if(curr == tail){
            tail = prev ;
        }
    }

    // prevent destructor from deleting other nodes
    curr->next = NULL ;

    delete curr ;
}

int main(){

    Node* tail = NULL ;

    // empty list me insert kar rahe hai
    insertNode(tail,5,3) ;

    print(tail) ;
    insertNode(tail,3,5) ;

    print(tail) ;
    insertNode(tail,5,7) ;

    print(tail) ;
    insertNode(tail,7,9) ;

    print(tail) ;
    insertNode(tail,5,6) ;

    print(tail) ;
    insertNode(tail,9,10) ;

    print(tail) ;
    deleteNode(tail,10);
    print(tail);

    return 0 ;
}