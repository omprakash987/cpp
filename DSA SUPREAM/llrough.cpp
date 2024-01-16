#include<iostream>
using namespace std;



class Node{
    public:
    int data;
    Node*next;

    Node(){
        this->data= 0;
        this->next = NULL;

    }


    Node(int data){
        this->data = data;
        this-> next = NULL;

    }
};

void print(Node * head){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
         
        }
        cout<<endl;
    }

 void insertAtHead(Node*&head,Node*&tail,int data){
        if(head==NULL){
            Node*newNode= new Node(data);
            head = newNode;
return ;
        }
        Node*newNode = new Node(data);
        newNode->next=head;
        head = newNode;


     
        



    }

     void insertAtTail(Node*&head,Node*&tail,int data){
        if(tail==NULL){
           
            Node*newNode=new Node(data);
            head=NULL;
            tail=NULL;
            return ;
                    }
        Node*newNode=new Node(data);
        tail->next=newNode;
        tail = newNode;

     }

    

int main(){
Node*head =NULL;
Node*tail = NULL;

print(head);
insertAtHead(head,tail,29);
insertAtHead(head,tail,20);
insertAtHead(head,tail,230);
insertAtHead(head,tail,270);
insertAtHead(head,tail,89);
cout<<"tail"<<endl;
insertAtTail(head,tail,50);
print(head);
print(head);



    return 0;
}
