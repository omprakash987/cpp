
#include<iostream>
#include<vector>
#include<limits.h>
#include<cstring>

using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data= data;
        this->next = NULL;


    }

      ~Node() {
        delete next;  
        // Recursively delete the remaining nodes
    }
};




Node*reverse(Node*head){
    Node*prev=NULL;
    Node*curr = head;
    Node*forward = curr->next;
    while(curr!=NULL){
        forward=curr->next;
        curr->next = prev;
        prev=curr;
        curr=forward;
    }
    return prev;

}


bool checkpalindrome(Node*head){
if(head==NULL){
    
    return true;
}

if(head->next= NULL){
    return true;
}

// >1 Node;
// step 1 find the middle Node;

Node*slow = head;
Node*fast = head->next;
while(fast!=NULL){
    fast=fast->next;
   if(fast!=NULL){
    fast=fast->next;
    slow=slow->next;

   }


}

// slow pointer is the middle Node;
// step 2 reverse LL after middle Node;
Node*reverseLLKaHead(slow->next);

slow->next = reverseLLKaHead;

// step C : start comparison 
Node*temp1=head;
Node*temp2 = reverseLLKaHead;
while(temp1 != temp2){
    if(temp1->data != temp2 ->data){
        return false; 
    }
    else{
        temp1 = temp1->next;
        temp2 = temp2 ->next;


    }
}
return true;

}

void print (Node*head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;

    }
    cout<<endl;
}

void removeDuplicate(Node*head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return ;
    }
    if(head->next==NULL){
        return ;
    }
    // >1 case
    Node*curr = head;

    while(curr != NULL){
        if((curr->next !=NULL)&& (curr->data == curr->next->data)){
 /// equal
 Node*temp = curr->next;

        curr ->next = curr->next ->next;
        temp ->next = NULL;
        delete temp;
        }
       

    
    else{
        // not equal 
        curr = curr->next;

    }
}
}


// void sortzeroOnetwo(Node*head){
//     int zero = 0 ;
//     int one =0;
//     int two =0;
//     Node temp = head;
//     while(temp != NULL){
//         if(temp ->data ==0){
//             zero++;
//         }
//         else if(temp->data==2){
//             two++;
//         }
//         else if(temp->data == 1){
//             one++;
//             temp = temp->next; 
//         }
        
//     }
// }

 

 Node* sort2(Node*&head){
    if(head==NULL){
        cout<<"LL is empty : "<<endl;
        return NULL;
    }
    if(head->next == NULL){
        return head;
    }


    Node*zeroHead = new Node(-1);
    Node*zeroTail = zeroHead;

    Node *oneHead = new Node(-1);
    Node*oneTail= oneHead;

    Node*twoHead = new Node(-1);
    Node*twoTail = twoHead;

    // traverse the original LL 

    Node* curr = head;
    while(curr != NULL){
        if(curr->data == 0 ){
            Node*temp = curr;
            curr = curr->next;
            temp ->next = NULL;

            // 
            zeroTail->next = temp;
            zeroTail= temp;
        }
            else if(curr->data == 1){
                Node*temp = curr;
            curr = curr->next;
            temp ->next = NULL;

            // 
            oneTail->next = temp;
            oneTail= temp;
            }

            else if(curr->data == 2){
                Node*temp = curr;
            curr = curr->next;
            temp ->next = NULL;

            // 
            twoTail->next = temp;
            twoTail= temp;

            }
        
    }
    // join them: 
    


    // nodify one wali list 
    Node*temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

    // modify two wali list 
    temp = twoHead;
    twoHead= twoHead->next;
    temp->next = NULL;

    delete temp;

    //join list 
    if(oneHead != NULL){
        // one wali list is Non empty;
        zeroTail->next = oneHead;
        if(twoHead != NULL)
            oneTail->next = twoHead;

    }
        else{
            if(twoHead != NULL)
                zeroTail->next = twoHead;
        }
            // remove
            temp = zeroHead;
            zeroHead = zeroHead->next;
            temp->next = NULL;
            delete temp;

            return zeroHead;
             
        

    

 }


 Node* solve(Node*&head1,Node*&head2){
    // step1 : reverse both LL 
    head1 = reverse(head1);
    head2 = reverse(head2);

    // step2 : add both LL 
    Node*ansHead = NULL;
    Node*anstTail = NULL;
    int carry = 0;

    while(head1 != NULL &&head2 != NULL){
        int sum = carry+head->head1->data+head2->data;
        int digit = sum%10;
        carry = sum/10;

        Node*newNode = new Node(digit);
        if(ansHead==NULL){
            // 
             ansHead = newNode;
             ansTail = newNode;

        }
        else{
            anstTail->next = newNode;
            anstTail= newNode;
        }
        head1= head1->next;
        head2=head2->next;
        

    }
    while(head1 != NULL){
        int sum = carry + head1->data;
        itn digit = sum%10;
        carry = sum/10;
        Node*newNode = newNode(digit);
        anstTail->next = newNode;
        ansTail= newNode;
        head1= head1->next;

    }

     while(head2 != NULL){
        int sum = carry + head2->data;
        itn digit = sum%10;
        carry = sum/10;
        Node*newNode = newNode(digit);
        anstTail->next = newNode;
        ansTail= newNode;
        head2= head2->next;
        
    }

    while(carry != 0){
        int sum = carry;
        int digit = sum%10;
        carry = sum/10;
        Node*newNode = new Node(digit);
        anstTail->next = newNode;
        anstTail=newNode;


    }
ansHead= reverse(ansHead);
return ansHead; 
 }

int main(){


// Node *head = new Node(1);
// Node *second = new Node(2);
// Node *third = new Node(2);
// Node *fourth = new Node(1);
// Node *fifth = new Node(0);
// Node *sixth = new Node(0);


// head->next= second;
// second->next = third;
// third ->next = fourth;
// fourth->next = fifth;
// fifth->next = sixth;

// cout<<"input LL : "<<endl;


// print(head);




// head = sort2(head);
// print(head); 
// cout<<"Input LL : "<<endl;
// print(head);

// removeDuplicate(head);
// cout<<"output LL : ";
// print(head);

// cout<<"hello world"<<endl;

//  checkpalindrome(head);
//  cout<<checkpalindrome(head)<<endl;
// cout<<ispalindrome<<endl;
// if(ispalindrome){
// cout<<"LL is a valid palindrome"<<endl;
// }
// else{
//     cout<<"LL is not a palindrome"<<endl;
// }


Node*head1= new Node(2);
Node*second1= new Node(4);
head1->next = second1;

Node*head2 = new Node;
Node* second2 = new Node;
Node*third2 = new Node;
head2->next = second2;
second2->next = third2;

Node*ans = solve(head1,head2);

print(ans);



    return 0;
}

