#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* previous;
    Node* next;
    //constructor
    Node(int data){
        this->data=data;
        this->previous=NULL;
        this->next=NULL;
    }
    ~Node(){
        while(this->next!=NULL){
            int val=this->data;
            delete next;
            delete previous;
            next= NULL;
            previous=NULL;
        }
    }
};
void printnode(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
void insertatfirst(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->previous=temp;
    head=temp;
}
void insertatend(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    temp->previous=tail;
    tail=temp;
    

}
//insert at position
void insertatposition(Node* &head,Node* &tail, int position,int data){
    if(position==1){
        insertatfirst(head,data);
        return;
    }
    else{
        //find the position first
         Node* temp=head;
         int cnt=1;
         while(cnt<position-1){
            temp=temp->next;
            cnt++;
         }
         Node* nodetoinsert=new Node(data);
          nodetoinsert->next=temp->next;
           temp->next->previous=nodetoinsert;
            temp->next=nodetoinsert;
         nodetoinsert->previous=temp;
        
        
        

    }
}
void deleteatfirst(Node* &head){
    Node* temp=head;
    head=temp->next;
    temp->next->previous=NULL;
    temp->next=NULL;
    delete temp;
}
void deletenode(Node* &head,Node* &tail,int position){
    if(position==1){
        deleteatfirst(head);
        return ;
    }
    else{
        //find the position
        Node* current=head;
        Node* previous=NULL;
        int cnt=1;
        while(cnt<position){
          previous=current;
          current=current->next;
          //we just find the position the remaing thng is to delete the node and loop is runs still the particular position
          cnt++;
        }
        current->previous=NULL;
        previous->next=current->next;
        current->next=NULL;

    }
}


int main(){
   Node* node1= new Node(10);
   Node* head=node1;
   Node* tail=node1;
   printnode(head);
   insertatfirst(head,20);
   printnode(head);
   insertatend(tail,40);
   printnode(head);
    insertatend(tail,60);
   printnode(head);
   
    insertatposition(head,tail,2,70);
    printnode(head);
    insertatposition(head,tail,1,500);
    printnode(head);
    deleteatfirst(head);
    printnode(head);
        deleteatfirst(head);
    printnode(head);
    deletenode(head,tail,2);
    printnode(head);
         return 0;
}