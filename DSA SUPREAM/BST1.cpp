#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

     Node(int data)
{
this->data=data;
this->left = NULL;
this ->right = NULL;

}

};

Node*insertIntoBST(Node*root,int data){
    if(root== NULL){
        // this is the first node we have to creat
        root = new Node(data); 
         return root ;

    }

    // no the first node: 
    if(root ->data >data){
        // insert in left :

        root->left = insertIntoBST(root->left, data);

    }
    else{
        root->right = insertIntoBST(root->right,data);

    }
}

void takeInput(Node*&root){
    int data;
    cin>>data;

    while(data!=-1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
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


 void preOrderTraversal(Node*&root){
    //NLR
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" ";
 
    preOrderTraversal(root->left);

    preOrderTraversal(root->right);
    
}

void inOrderTraversal(Node*&root){
    //LNR
    if(root==NULL){
        return ;
    }

  
    inOrderTraversal(root->left);

    cout<<root->data<<" ";
  

    inOrderTraversal(root->right);
   
}


void postOrderTraversal(Node*&root){
    //LRN
    if(root==NULL){
        return ;
    }


    postOrderTraversal(root->left);

  
  

    postOrderTraversal(root->right);

      cout<<root->data<<" ";

    
}



Node* findNodeInBST(Node*root,int target){
    if(root == NULL){
        return NULL;

    }

    if(root->data == target ){
        return root;
    }
    if(target>root->data){
        return findNodeInBST(root->right,target);

    }

    else{
        return findNodeInBST(root->left,target);

    }
}



int minsearch(Node*root){
    Node*temp = root;

    if(temp == NULL){
        return -1;
    }
    while(temp->left !=NULL){
        temp = temp->left;
    }

    return temp->data;

}


int maxsearch(Node*root){
    Node*temp = root;

    if(temp == NULL){
        return -1;
    }
    while(temp->right !=NULL){
        temp = temp->right;
    }

    return temp->data;

}

Node*deleteNodeBST(Node*root,int target){
    if(root==NULL){
        return NULL;
    }

    if(root->data == target){
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        else if(root->left == NULL && root->right != NULL){
            Node*child = root->right;
            delete root;
            return child;


        }
        else if(root->left != NULL && root->right == NULL){
            Node*child = root->left;
            return child;

        }
        else{
            // both child: 
            int inorderpre = maxsearch(root->left);
            root->data = inorderpre;

            root->left = deleteNodeBST(root->left, inorderpre);
            return root;
        }
    }

    else if(target>root->data){
        root->right =  deleteNodeBST(root->right,target);

    }

    else if(target<root->data){
        root ->left =  deleteNodeBST(root->left,target);

    }
    return root;
}






// Node*deleteNodeInBST(Node*root,int target){
//     // base case: 
//     if(root==NULL){
//         return NULL;
//     }

//     // step 1: 
//     Node*temp = findNodeInBST(root,target);
//     // delete temp:
//     if(temp->left==NULL && temp->right == NULL){
//         delete temp;
//         return NULL;
//     }
//     else if(temp->left == NULL && temp->right!=NULL){
//         Node*child = temp->right;
//         delete temp;
//         return child;

//     }
// else if(temp->left !=NULL && temp->right==NULL){
//     Node*child = temp->left;
//     delete temp;
//     return child;

// }
// else{
//     // both exist: 
//     // inorderpredecessor of left subtree: 
//     int inorderpre = maxsearch(temp->left);
//     temp->data = inorderpre;
//     temp->left = deleteNodeInBST(temp->left,inorderpre);
//     return root;
// }

// }








int main(){
 Node*root = NULL;
 cout<<"enter the data for Node : ";
 takeInput(root);
cout<<"printing the tree : "<<endl;

levelorderTraversal(root);
cout<<endl;


cout<<"print inorder: "<<endl;

inOrderTraversal(root);
cout<<endl;

cout<<"printing preOrder: "<<endl;
preOrderTraversal(root);
cout<<endl;

cout<<"printing postorder : "<<endl;
postOrderTraversal(root);

cout<<endl;
bool ans = findNodeInBST(root,15);
cout<<"present or not : "<<ans<<endl;


cout<<endl<<"min val :"<<minsearch(root)<<endl;

cout<<endl<<"max val :"<<maxsearch(root)<<endl;


root = deleteNodeBST(root,100);
levelorderTraversal(root);



    return 0;
}


