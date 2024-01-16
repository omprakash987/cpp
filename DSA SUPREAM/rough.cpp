#include <iostream>
#include<cmath>
#include<queue>
#include<stack>
#include<limits.h>
#include<vector>
using namespace std;


class Node{
    public: 

    int data;
    Node *left; 
    Node *right;

    Node(int data){
        this->data = data;
      left = NULL;
      right = NULL;

    }
};


Node*buildTree(){
    int data;
    cout<<"enter the data : "<<endl;
    cin>>data;
    // base case 
   

    if(data == -1){
        return NULL;
    }


    Node*root = new Node(data);
    cout<<"enter the left node : "<<endl;
    root->left = buildTree();
    cout<<"enter the right node : "<<endl;
    root->right = buildTree();
    return root;

}

void levelOrderTreversal(Node*root){
    // sabase pehle queue banao
   
queue<Node*>q;
// usme Node ka data dalo 
q.push(root);
q.push(NULL);

while (!q.empty())
{
   Node*temp = q.front();
   q.pop();

   if(!q.empty()){
    q.push(NULL);

    if(temp== NULL){
        cout<<endl;

    }

   }

   if(!q.empty()){
    q.push(NULL);

   }

   else{
    cout<<temp->data<<" ";
    if(temp->left){
        q.push(temp->left);

    }
    if(temp->right){
        q.push(temp->right);
    }
   }

}


}


void height(Node*root){
    // base case 
    if(root == NULL){
        return 0;
    }

    int left = height(root->left);
    int rightheight = height(root->right);
    int ans = max(left,rightheight)+1;
    return ans; 
}

int main(){
    Node*root = NULL;
    root = buildTree();
    levelOrderTreversal(root);


}

