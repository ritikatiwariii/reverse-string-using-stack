#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        while(this->next!=NULL){
          delete next;
          next=NULL;
        }
    }
};
void printnode(Node* &head){
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
void deleteAtFirst(Node* &head ,int position){
    if(position==1){
    Node* temp=head;
    head=temp->next;
    temp->next=NULL;
    delete temp;
    }
    else{
     Node* current=head;
     Node* previous=NULL;
     //position m pahuchooooo
     int cnt=1;
     while(cnt<position){
        previous=current;
        current=current->next;
        cnt++;
     }
     previous->next=current->next;
     current->next=NULL;
     delete current;
    }
}
int main(){
    Node* node1=new Node(12);
    Node* head= node1;
    printnode(head);
    InsertAtFirst(head,40);
    printnode(head);
    InsertAtFirst(head,300);
    printnode(head);
    deleteAtFirst(head,1);
    printnode(head);
    deleteAtFirst(head,2);
    printnode(head);
    
 
    return 0;
   
}