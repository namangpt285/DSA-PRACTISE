#include <iostream> 
using namespace std ;
// creation of node in linked list
// class Node{
//     public :
//     int data ;
//     Node* next ;

//     Node(int data){
//         this->data = data ;
//         this->next = NULL ;
//     }

// };

// int main(){
//     Node* node1 = new Node(10) ;
//     cout<<node1->data<<endl ;
//     cout<<node1->next<<endl ;
//     return 0 ;
// }
// insertion at head to create singly linked list
class Node{
    public :
    int data ;
    Node* next ;

    Node(int data){
        this->data = data ;
        this->next = NULL ;
    }

};
void InsertAtHead(Node* &head,int d){
    Node* temp = new Node(d) ;
    temp->next = head ;
    head = temp ;
}
void Print(Node* &head){
    Node*temp = head ;
    while(temp!=NULL){
        cout<<temp->data<<" " ;
        temp = temp->next ;
    }
}
void InsetAtTail(Node* &tail,int d ){
    Node* temp = new Node(d) ;
    tail->next = temp ;
    tail = temp ;

}
// int main(){
//     Node* node1 = new Node(10) ;
//     cout<<node1->data<<endl ;
//     cout<<node1->next<<endl ;
//     // head pointing to node1
//     Node* head = node1 ;
//     Print(head) ;
//     cout<<endl ;
//     InsertAtHead(head,12) ;
//     Print(head) ;
//     cout<<endl ;
//     InsertAtHead(head,15) ;
//     Print(head) ;
//     return 0 ;
// }
int main(){
    
    Node* node1 = new Node(10) ;
    cout<<node1->data<<endl ;
    cout<<node1->next<<endl ;
    // head pointing to node1
    Node* head = node1 ;
    Node* tail = node1 ;
    Print(head) ;
    cout<<endl ;
    InsertAtHead(head,12) ;
    Print(head) ;
    cout<<endl ;
    InsertAtHead(head,15) ;
    Print(head) ;
    cout<<endl ;
    InsetAtTail(tail,20) ;
    InsetAtTail(tail,25) ;
    Print(head) ;
}