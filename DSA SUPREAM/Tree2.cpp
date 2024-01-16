#include<iostream>
#include<queue>
using namespace std;


// balance binary tree: 

// int height(TreeNode*root){
//     if(root == NULL){
//         return 0;
//     }
//     int leftheight = height(root->left);
//     int rightheight = height(root->right);
//     int ans = max(leftheight,rightheight)+1;
//     return ans;
// }
//     bool isBalanced(TreeNode* root) {
//         // base case: 
//         if(root== NULL){
//             return true;
//         }

//         // 1 case:
//         int leftheight = height(root->left);
//         int rightheight = height(root->right);
//         int diff = abs(leftheight-rightheight);

//         bool ans1 = (diff<=1);
//         bool leftAns = isBalanced(root->left);
//         bool rightAns = isBalanced(root->right);

//         if(ans1 && leftAns && rightAns){
//             return true;

//         }
//         else{
//             return false;
//         }

        
//     }


// lowest common ancistor


// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
//         if(root == NULL){
//             return NULL;
//         }

//         // check p and q 
//         if(root->val == p->val){
//             return p;
//         }

//         if(root->val == q->val){
//             return q;
//         }


//         TreeNode* leftAns = lowestCommonAncestor(root->left,p,q);
//          TreeNode* rightAns = lowestCommonAncestor(root->right,p,q);

//          if(leftAns == NULL && rightAns == NULL){
//  return NULL;
//          }
        
//          else if(leftAns!= NULL && rightAns == NULL){
//              return leftAns;

//          }
//          else if(leftAns== NULL && rightAns != NULL){
//              return rightAns;

//          }
//          else{
//              return root;
//          }
//     }
// };



// kth ancistor: 


// int kthAncestor(Node *root, int k, int node)
// {
//    if(root == NULL){
//        return NULL;
//    }
//    if(root->data == node){
//        return true;
//    }
   
//    bool leftans= kthAncestor(root->left,k,node);
//    bool rightans = kthAncestor(root->right,k,node);
   
//    if(leftans == true || rightans == true){
//        k--;
//    }
//    if(k==0){
//        cout<<root->data;
//        return false;
//    }
// }
