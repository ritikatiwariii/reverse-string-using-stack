#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //creating destructor
    ~Node(){
        while(this->next!=NULL){
            int val=this->data;
            delete next;
            next=NULL;
        }
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void InsertAtFirst(Node* &head,int d){
    //create a node first
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

}
void InsertAtLast(Node* &tail,int d){
   Node* temp=new Node(d);
   tail->next=temp;
   tail=tail->next;
}
//insert at particular position
//you want to insert at particular location then you traverse only position-1;
void insertAtPosition(Node* &head,int position,int d){
    //find a position
    Node* temp=head;
    int cnt=1;
    while(cnt< position-1){
        temp=temp->next;
        cnt++;
    }
    //make a node
    Node* nodetoinsert= new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}

int main(){
 
    Node* node1= new Node(12);
     
       Node* head=node1;
       print(head);
       Node* tail=node1;
     InsertAtFirst(head,100);
     print(head);
     InsertAtFirst(head,600);
     print(head);
     InsertAtLast(tail,6666);
     print(head);
     InsertAtLast(tail,5);
     print(head);
     insertAtPosition(head,2,400);
     print(head);
     insertAtPosition(head,4,6666);
     print(head);
     
   
    
    return 0;
}