  #include<iostream>
  #include<queue>

  using namespace std;
  class Node{
    public:
    int data;
    Node*left;
    Node*right;
    
    Node(int data){
      this->data = data;
      this ->left = NULL;
      this->right = NULL;

    }


  };

  int findPosition(int arr[],int n , int element){
    for(int i=0;i<n;i++){
      if(arr[i]==element){
              return i;
      }
    }
    return -1;
  }

 Node*  buildtreeFromPreorderInorder(int inorder[],int preorder[],int size,int &preIndex,int inorderStart,int inorderEnd){

// base case: 
if(preIndex>=size || inorderStart>inorderEnd){
  return NULL;
}

int element = preorder[preIndex++];
Node*root = new Node(element);

int pos = findPosition(inorder,size,element);

// step B : root->left solve: 
root ->left = buildtreeFromPreorderInorder(inorder,preorder,size,preIndex,inorderStart,pos-1);

// stepC : root->right solve: 
root->right = buildtreeFromPreorderInorder(inorder,preorder,size,preIndex,pos+1,inorderEnd);

return root;
}




 Node*  buildtreeFromInorderPostorder(int inorder[],int postorder[],int &postIndex,int size,int inorderStart,int inorderEnd ){

  if(postIndex<0||inorderStart>inorderEnd){
return NULL;

  }

  int element = postorder[postIndex];
  postIndex--;

  Node*root = new Node(element);

  int pos = findPosition(inorder,size,element);

root->right = buildtreeFromInorderPostorder(inorder,postorder,postIndex,size,pos-1,inorderEnd);

root->left = buildtreeFromInorderPostorder(inorder,postorder,postIndex,size,inorderStart,pos-1);


return root;


 }





  void levelorderTraversal(Node*root){
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

//    int inorder[]={40};
//    int preorder[]={10};
// int size = 1;
// int preIndex =0;
// int inorderStart = 0;
// int inorderEnd = size-1;

// cout<<"Building Tree : "<<endl;

// Node*root = buildtreeFromPreorderInorder(inorder,preorder,size,preIndex,inorderStart,inorderEnd);

// cout<<"printing the level order traversal "<<endl;
// levelorderTraversal(root);


int inorder[]={40,20,10,50,30,60};
int postorder[]={40,20,50,60,30,10};

int size = 6;
int postIndex = size-1;
int inorderStart = 0;
int inorderEnd = size-1;

cout<<"Building the tree : "<<endl;
Node*root = buildtreeFromInorderPostorder(inorder,postorder,postIndex,size,inorderStart,inorderEnd);
cout<<"printing the tree : ";
levelorderTraversal(root);

return 0;
  }