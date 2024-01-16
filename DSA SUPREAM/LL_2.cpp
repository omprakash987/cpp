#include<iostream>
#include<limits.h>
#include<vector>
#include<string.h>
using namespace std;

// class Node{
//     public:
//     int data;
//     Node*prev;
//     Node * next;

//     Node(){
//         this ->data = 0;
//         this ->prev = NULL;
//         this ->next = NULL ;

//     }
//     Node(int data){
//         this ->data = data;
//         this ->prev = NULL ;
//         this -> prev = NULL ;

//     }

//     ~Node() {
//         cout<<"Node with value : "<<this->data<<"delete"<<endl;
//     }
    

// };



// void print(Node *head){
//     Node *temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp= temp ->next;
//     }
//     cout<<endl;
 
// }

// int findLength(Node*&head){
//     int len =0;
//     Node*temp = head;
//     while(temp != NULL){
//         temp = temp->next ;
//         len++;
//     }
//     return len;
// }

  
//   // Insertion 

//   void insertionAtHead(Node*&head, Node*&tail, int data){
//     if(head == NULL ){
//         Node *newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return ;
//     }

//     Node * newNode = new Node(data);
//     newNode->next = head;
//     head->prev=newNode;
//     head = newNode;

//   }


// void insertAtTail(Node*&head,Node*&tail,int data){
//     if(head==NULL){
//         Node*newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return ;
//     }

//     Node*newNode = new Node(data);
//     tail->next = newNode;
//     newNode->prev= tail;
//       tail= newNode ;

// }



// void insertAtpossition (Node*&head, Node*&tail,int data, int possition){
//     if(head == NULL){
//         Node *newNode=new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;

//     }
//     if(possition == 1){
//         insertionAtHead(head,tail,data);

//     }
//     int len = findLength(head);
//     if(possition > len){
//         insertAtTail(head,tail,data);
         
//     }

//     // step 1 find prev and curr:
//     int i=1;
//     Node*prevNode = head;
//     while(i<possition-1){
//        prevNode= prevNode->next;
//        i++;

//     }
//     Node*curr = prevNode->next;

//     Node*newNode= new Node(data);
   
//     prevNode->next = newNode;
//     newNode->prev=prevNode;
//      newNode->next = curr;
//      curr->prev= newNode;
// }


// void deleteFrompos(Node*&head,Node*&tail,int position){
//     if(head==NULL){
//         return ;
//     }
//     if(head->next == NULL){
//         // single Node;
//         Node*temp = head;
//         head= NULL;
//         tail = NULL;

//         delete temp;
//         return ;
//     }
//     int len = findLength(head);
//     if(position>len){
//         cout<<"wrong"<<endl;
//         return ;
//     }
//     if(position ==1){
//         // delete the first node;
//         Node*temp = head;
//         head = head ->next;
//         head->prev = NULL;
//         temp->next = NULL;
//         delete temp;
//         return ;
//     }
   
//     if(position == len){
//         // delete last Node;
//         Node *temp = tail;
//         tail = tail ->prev;
//         temp->prev= NULL;
//         tail->next = NULL;
//         delete temp;
//         return ;

//     }

//     // delete from middle

//     // step 1: find left , right, curr;
//     int i=1;
//     Node*left = head;
//     while(i<position -1){
//         left= left->next;
//         i++;
//     }
//     Node*curr= left->next;
//     Node*right= curr->next;

//     left->next = right;
//     right->prev = left;

//     curr->next= NULL;
//     curr->prev = NULL;

//     delete curr;
// }

// int main(){

// Node*first = new Node(10);
// Node * second = new Node(20);
// Node * third = new Node(30);

// Node*head = first;
// Node * tail= third;



// first->next = second;
// second->prev = first;
// second->next = third;
// third ->prev = second;

// print(first);
// // cout<<endl;

// insertionAtHead(head,tail,101);
// cout<<endl;
// print(head);
// // cout<<endl;
// // insertAtTail(head,tail,3);
// // // cout<<endl;

// // print(head);
// // cout<<endl;
// insertAtpossition(head,tail,2,2);
// print(head);
// print(head);

// deleteFrompos(head,tail,3);
// cout<<endl;
// print(head);
// cout<<endl;

//     return 0;
// }





// reverse the linked list:


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

Node*reverse(Node*&prev,Node*&curr){
    // base case
    if(curr == NULL){
        return prev;
    }

    // 1 case solve karo 
    Node *forward = curr->next;
    curr->next = prev;

    reverse(curr,forward);
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
insertAtHead(head,tail,77);

print(head);

// insertAtHead(tail,10);
// insertAtHead(tail,20);
// insertAtHead(tail,30);
// insertAtHead(tail,40);


// print (head);
// cout<<"head: "<<head->data<<endl;
// cout<<"tail: "<<tail->data<<endl;
// deleteNode(8 ,head,tail);
//  print (head);


//   print(head);
// insertAtPosition (101,5,head,tail);
// cout<<endl;
// print(head);
// cout<<endl;
// cout<<"head: "<<head->data<<endl;
// cout<<"tail: "<<tail->data<<endl;

cout<<endl;
Node*prev = NULL ;
Node *curr = head;
head= reverse (prev,curr);
cout<<endl;
print(head);
cout<<endl;


    return 0;
}