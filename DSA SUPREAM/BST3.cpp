#include<iostream>
#include<queue>
#include<limits.h>
using namespace std;

class Node{

    public:
    int data;
    Node*left;
    Node*right;

    Node(int data){

        this->data = data;
        this ->left = NULL;
        this ->right = NULL;

    }
};


class NodeData{
    public: 
    int size ; 
    int minval;
    int maxval;
    bool validBST;

    NodeData(int size,int max , int min, bool validBST){
this->size = size;
minval = min;
maxval = max;
validBST = validBST;


    }
};


void convertintosortedDLL(Node*root,Node*&head){
    // base case ;
    if(root == NULL){
        return ;
    }
// right part into LL
    convertintosortedDLL(root->right,head);
    // attach root Node
    root->right = head ;

    if(head !=NULL){
        head->left = root;
    }
    // update head;
    head = root;

    // left part into LL

    convertintosortedDLL(root->left,head);
    

}

void printLL(Node*head){
    Node*temp = head ;
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
       temp=temp->right;

    }
    cout<<endl;
}



Node*bstUsingInorder(
    int inorder[],int s, int e )
{
 if(s>e){
    return NULL;

 }

 int mid = (s+e)/2;
 int element = inorder[mid];
 Node*root = new Node(element);

 root->left = bstUsingInorder(inorder,s,mid-1);
 root->right = bstUsingInorder(inorder,mid+1,e);
 return root;


} 




void levelorderTraversal(Node*&root){
    queue<Node*>q;
    // initially : 


    q.push(root);
    q.push(NULL);


    while(!q.empty()){
        // A
        Node* temp = q.front();
        //B
     q.pop();


        if(temp==NULL){
cout<<endl;
if(!q.empty()){
  q.push(NULL);

}
        }
        else{
          cout<<temp->data<<" ";
          // D 
          if(temp->left){
            q.push(temp->left);

          }
          if(temp->right){
            q.push(temp->right);

          }

        }


       

    }

}




Node*sortedLLIntoBST(Node*&head,int n){
    // base case: 
    if(n<=0 ||head == NULL){
        return NULL;
    }
    Node*leftsubtree=sortedLLIntoBST(head,n/2);

    Node*root = head;
    root->left = leftsubtree;

    head = head->right;

    // right part
    root->right= sortedLLIntoBST(head,n-1-n/2);

    return root;



}



NodeData  findlargestbst(Node*root,int &ans){
    // base case: 
    if(root ==NULL){
        NodeData temp = new NodeData(0,INT_MIN,INT_MAX,true);

        return temp;

    }

    NodeData leftKaAns = findlargestbst(root->left,ans);
    NodeData rightans = findlargestbst(root->right,ans);

    NodeData currNodekaans;

    currNodekaans->size = leftKaAns.size+rightans.size+1;

    currNodekaans.maxval = max(root->data,rightkaans.maxval);

    currNodekaans.min=min(root->data,leftKaAns.min);

    if(leftKaAns->validBST&& rightans->validBST&&(root->data > leftKaAns->maxval &&root->data <rightans.minvall)){
        currNodekaans.validBST = true;

    }
    else{
        currNodekaans.validBST = false;

    }
    if(currNodekaans.validBST){
        ans = max(ans,currNodekaans.size);
        
    }
    return currNodekaans;


}


int main(){
// int inorder[]={1,2,3,4,5,6,7,8,9};
// int s = 0;
// int e = 8;
// Node*root = bstUsingInorder(inorder,s,e);
// levelorderTraversal(root);



// cout<<"printing sorted LL"<<endl;
// Node*head =NULL;
// convertintosortedDLL(root,head);
// printLL(head);

// Node*root1 = NULL;
// root1 = sortedLLIntoBST(head,9);
// cout<<"doing level order traversal : "<<endl;
// levelorderTraversal(root1);


// Node*root = NULL;
// cout<<"enter the data for Node"<<endl;
// takeInput(root);


Node*root = new Node(50);
Node*first = new Node(30);
Node*second = new Node(60);
Node*third = new Node(5);
Node*fourth = new Node(20);

root->left = first;
root->right = second;
first->left = third;
first ->right = fourth;


    return 0;
}