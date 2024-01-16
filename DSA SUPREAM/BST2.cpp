#include<iostream>
#include<queue>
using namespace std;

// valid binary tree:(leetcode);
// lowest common ansistor(leetcode)
// kth smallest element(leetcode)
// creat bst using inorder traversal (leetcode)
// create bst using inorder traversal: 
// two sum in bst: 


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





Node*bstusingInorder(
    int inorder[],int s, int e )
{
 if(s>e){
    return NULL;

 }

 int mid = (s+e)/2;
 int element = inorder[mid];
 Node*root = new Node(element);

 root->left = bstusingInorder(inorder,s,mid-1);
 root->right = bstusingInorder(inorder,mid+1,e);
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


int main(){

int inorder[]={1,2,3,4,5,6,7,8,9};
int s= 0;
int e = 8;
Node*root = bstusingInorder(inorder,s,e);
levelorderTraversal(root);



   
    return 0;
}