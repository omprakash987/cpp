#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data= data;
        this->next = NULL;

    }
};

void print(Node* head){
    Node*temp = head;
    while (temp != NULL)
    {
       cout<<temp->data<<" ";
       temp = temp->next;

    }
    
    cout<<endl;

}

Node*getMiddle(Node*head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return head;
    }

    if(head->next==NULL){
        return head;
    }

    // LL have > 1 Node;

    Node*slow = head;
    Node*fast = head;

    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast !=NULL){
            fast= fast->next;
            slow= slow->next;
        }
    }
    return slow;

}

int getLength(Node*&head){
    int len =0;
Node*temp = head;
while(temp != NULL){
len++;
temp = temp->next;
}
return len;
}


Node* reverseKNode(Node*&head, int k){
    if(head==NULL){
        cout<<"LL is enpty"<<endl;
        return NULL;

    }
    int len = getLength(head);
    if(k>len){
    //cout<<"enter the valid value of k :"<<endl;
    return head;
    }

    // it mean number of node in LL is > = k 

    Node *prev =  NULL ; 
     Node * curr= head ;
     Node*forward  = curr->next;
     int cout= 0 ;

     while(cout<k){
        forward = curr ->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        cout++;

     }
     if(forward != NULL){
        // we still have Node left to reverse ;
        head->next = reverseKNode(forward,k);
     }
    return prev; 
}


bool checkForLoop(Node*&head){
    if(head==NULL){
        cout<<"LL is empty : "<<endl;
        return false;
    }

    Node*slow = head;
    Node *fast = head;

    while(fast != NULL){
        fast=fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow ->next;
        }
        if(slow == fast){
            cout<<"Loop is present : ";
            return true;
        }
    }

    return false;

}


Node*startingPointLoop(Node*&head){
    if(head==NULL){
        cout<<"LL is empty : "<<endl;
        return NULL;
    }

    Node*slow = head;
    Node *fast = head;

    while(fast != NULL){
        fast=fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow ->next;
        }
        if(slow == fast){
            slow = head;
            break;
        }
    }
while(slow != fast){
    slow = slow->next;
    fast = fast->next;
}
return fast;
   
}






Node*removeLoop(Node*&head){
    if(head==NULL){
        cout<<"LL is empty : "<<endl;
        return NULL;
    }

    Node*slow = head;
    Node *fast = head;

    while(fast != NULL){
        fast=fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow ->next;
        }
        if(slow == fast){
            slow = head;
           
            break;
        }
    }
     Node*prev = fast;
while(slow != fast){
    prev = fast;
    slow = slow->next;
    fast = fast->next;
}
prev->next = NULL;
return fast;
   
}


int main(){

Node*head = new Node(10);
Node*second = new Node(20);
Node*third = new Node(30);
Node*fourth = new Node(40);
Node*fifth = new Node(50);
Node*sixth = new Node(60);
Node*seventh = new Node(70);
Node*eight = new Node(80);
Node*ninth = new Node(90);

head->next = second;
second->next = third;
third->next = fourth;
fourth->next = fifth;
fifth->next = sixth;
sixth->next = seventh;
seventh->next = eight;
eight->next = ninth;
ninth->next = fifth;





// print(head);

// head = reverseKNode(head,8);
// print (head);


// cout<<"Middle Node is : "<<getMiddle(head)->data<<endl;
// print (head);

cout<<checkForLoop(head)<<endl;

cout<<"starting point of loop is  : "<<startingPointLoop(head)->data<<endl;
removeLoop(head);
print(head);

cout<<checkForLoop(head)<<endl;
cout<<"starting point of loop is  : "<<startingPointLoop(head)->data<<endl;
    return 0;
}