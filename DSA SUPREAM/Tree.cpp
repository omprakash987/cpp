#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int data)
  {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};

int maxDepth(TreeNode *root)
{
  if (root == NULL)
  {
    return 0;
  }

  int leftheight = maxDepth(root->left);
  int rightheight = maxDepth(root->right);
  int ans = max(leftheight, rightheight) + 1;
  return ans;
}

int diameterOfBinaryTree(TreeNode *root)
{

  // base case
  if (root == NULL)
  {
    return 0;
  }

  int opt1 = diameterOfBinaryTree(root->left);
  int opt2 = diameterOfBinaryTree(root->right);
  int opt3 = maxDepth(root->left) + maxDepth(root->right);
  int ans = max(opt1, max(opt2, opt3));

  return ans;
}

int height(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }

  int leftheight = height(root->left);
  int rightheight = height(root->right);
  int ans = max(leftheight, rightheight) + 1;
  return ans;
}

void postorderTraversal(Node *root)
{
  if (root == NULL)
  {
    return;
  }

  postorderTraversal(root->left);
  postorderTraversal(root->right);
  cout << root->data;
}

void preorderTraversal(Node *root)
{
  // NLR

  // base case

  if (root == NULL)
  {
    return;
  }

  // NLR
  cout << root->data << " ";
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

void inorderTraversal(Node *root)
{
  // LNR

  // base case
  if (root == NULL)
  {
    return;
  }
  // LNR
  inorderTraversal(root->left);
  cout << root->data << " ";
  inorderTraversal(root->right);
}

void levelorderTraversal(Node *root)
{
  queue<Node *> q;
  // initially :

  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    // A
    Node *temp = q.front();
    // B
    q.pop();

    if (temp == NULL)
    {
      cout << endl;
      if (!q.empty())
      {
        q.push(NULL);
      }
    }
    else
    {
      cout << temp->data << " ";
      // D
      if (temp->left)
      {
        q.push(temp->left);
      }
      if (temp->right)
      {
        q.push(temp->right);
      }
    }
  }
}

Node *buildTree()
{
  int data;
  cout << "enter the data: " << endl;
  cin >> data;

  if (data == -1)
  {
    return NULL;
  }

  // step A, B and C;

  Node *root = new Node(data);
  cout << "enter the data for left part of  " << data << "node" << endl;

  root->left = buildTree();
  cout << "enter the data for right part of  " << data << "node" << endl;

  root->right = buildTree();
  return root;
}

int main()
{
  Node *root = NULL;
  root = buildTree();
  levelorderTraversal(root);

  cout << "height : " << height(root);

  return 0;
}