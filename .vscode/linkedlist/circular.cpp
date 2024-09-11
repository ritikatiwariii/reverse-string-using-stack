#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //contructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        while(this->next!=NULL){
            int val=this->data;
            delete next;
            next=NULL;
        }
    }
};
void print(Node* tail){
    Node* temp=tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;

    }while(tail!=temp);
    cout<<endl;
}
void insertnode(Node* &tail,int value,int data){
    if(tail==NULL){
        Node* newnode= new Node(data);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        //find the position
        Node* current=tail;
        while(current->data!=value){
            current=current->next;
            //simply mean element is found;
        }
        Node* temp=new Node(data);
        temp->next=current->next;
        current->next=temp;
    }
}
int main(){
    Node* node1=new Node(12);
    Node* tail=node1;
    print(tail);
    insertnode(tail,12,40);
    print(tail);
   
    return 0;
}