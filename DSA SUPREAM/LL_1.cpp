#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

// class Node {
//     public:

//     int data;
//     Node* next;


//     Node(int data){
//         this->data = data;
//         this-> next = NULL;

//     }

   

// };

//  void print(Node * &head){
//         Node *temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//     }

// int main(){

// Node* first = new Node(10);
// Node* second = new Node(20);
// Node* third = new Node(30);
// Node* fourth = new Node(40);
// Node* fifth = new Node(50);

// first->next = second;
// second->next = third;
// third->next = fourth;
// fourth->next = fifth;


// cout<<"printing the LL"<<endl;

// print(first);


//     return 0;
// }





class Node {
    public:

    int data;
    Node* next;
 

Node(){
        this->data = 0;
        this-> next = NULL;
}

    Node(int data){
        this->data = data;
        this-> next = NULL;

    }

    ~Node() {
        delete next;  // Recursively delete the remaining nodes
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

    int findLength(Node*&head){
        int len =0;
        Node *temp = head;
        while(temp != NULL){
            temp = temp->next;
            len++;

        }
        return len;

    }

// inset a node right at the head of linklist
void insertAtHead(Node *& head,Node*& tail,int data){
    

     // step 1
     if(head == NULL){
        Node*newNode = new Node(data);
        head = newNode;
        tail = newNode;
      
        return ;
     }

     // step 2

      Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;


}

//insert a node right at the end of linkdlist in tail
void insertAtTail(Node*&head,Node *& tail, int data){
    // step 1;
    
    // step 2;
if (tail == NULL){
Node *newNode = new Node(data);
tail = NULL;
head = NULL;
return ;
}

   Node*newNode = new Node(data);
   tail->next = newNode;
   tail = newNode;


}


void insertAtPosition(int data, int position ,Node*&head, Node*&tail){
    if(head == NULL){
        Node*newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return ;

    }

    // step 1: find the position : prev & curr:
    if(position == 0){
        insertAtHead(head,tail,data);
        return ;
    }
    int len = findLength(head);
    if(position >= len){
        insertAtTail(head,tail,data);
        return ; 
    }
    int i=1;
    Node * prev = head;
    while (i<position ){
        prev = prev->next ;
        i++;

    }
    Node * curr = prev->next;


    // step2;
    Node *newNode = new Node (data);

    // step 3;
   newNode->next = curr;

   // step 4;
   prev ->next = newNode;

}


void deleteNode(int position , Node*&head,Node *&tail){

    // delete first node
    if(head==NULL){
        cout<<"cannot delete , LL is empty";
        return ;
    }
    
    if(position==1){
        Node*temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

   // deleting last Node
   int len = findLength(head);
   if(position ==len){
//find prev
int i=1;
Node *prev = head;
while(i<position-1){
    prev = prev ->next;
  i++;
}
// step 2;
prev->next = NULL;
// step 3;
Node *temp= tail;
// step 4;
tail = prev;
// step 5;
delete temp;

return ;
   }
    
    // delete at the middle;
    // step : find prev and curr ;
    if(position>len){
        return ;
    }
    int i=1;
    Node *prev = head;
    while (i<position -1){
        prev = prev->next;
        i++;
    }
    Node * curr = prev->next;
    // step 2;
    prev ->next = curr->next;
    // step 3
curr->next = NULL ;
// step 4;
delete curr;

     


    }






int main(){
//Node * head = new Node (10);
Node * head = NULL;
Node * tail = NULL;
// Node * tail = NULL;
// insertAtHead(head,tail,20);
// insertAtHead(head,tail,30);
// insertAtHead(head,tail,40);
// insertAtHead(head,tail,50);
// insertAtTail(head, tail,77);


insertAtHead(head,tail,90);
insertAtHead(head,tail,60);
insertAtHead(head,tail,50);
insertAtHead(head,tail,20);
insertAtTail(head,tail,77);

// insertAtHead(tail,10);
// insertAtHead(tail,20);
// insertAtHead(tail,30);
// insertAtHead(tail,40);


// print (head);
// cout<<"head: "<<head->data<<endl;
// cout<<"tail: "<<tail->data<<endl;
deleteNode(8 ,head,tail);
 print (head);


//   print(head);
// insertAtPosition (101,5,head,tail);
// cout<<endl;
// print(head);
// cout<<endl;
// cout<<"head: "<<head->data<<endl;
// cout<<"tail: "<<tail->data<<endl;



    return 0;
}