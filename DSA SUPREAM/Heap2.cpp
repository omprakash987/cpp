#include<iostream>
#include<queue>

using namespace std;


// convert cbt to heap ; 
 
pair<bool,int> solve(Node*root){
    // base case ; 
    if(root==NULL){
        pair<bool,int>p = make_pair(true,INT_MIN);
        return p; 

    }
    if(root->left == NULL && root->right == NULL){
        // leaf node; 
        pair<bool,int>p = make_pair(true,root->data);
        return p;
         
    }

    pair<bool,int>leftAns = solve(root->left);
    pair<bool,int>rightAns = solve(root->right);

    if(leftAns.first==true&&right.first==true&&root->data >leftAns.second && root->data >rightAns.second){
        pair<bool,int>p = make_pair(true,root->data);
        return p; 

    }

    else{
        pair<bool,int>p = make_pair(false,root->data);
        return p; 

    }
}







pair<bool,int>solve(Node*root){
    // base case: 
    if(root->left == NULL){
        && root->right == NULL
{
    // // leaf node
    pair<bool,int>p = make_pair(true,root->data);
    return p;
}

else{
    pair<bool, int>p = make_pair(false, root->data);
    return p; 

}

    }
}




int getkthgreatestelement(int arr[],int n,int k){
     //create priority queue: 

    priority_queue<int,vector<int>,greater<int>>pq;
    // insert initial kth element of array  :
    for(int i = 0;i<k;i++){
        pq.push(arr[i]);

    }
    // for remaining element push only if they are greater than top : 
    for(int i=k;i<n;i++){
        int element = arr[i];
        if(element>pq.top()){
            pq.pop();
            pq.push(element);

        }
    }
    int ans = pq.top();
    return ans;
}




// int getkthlargestelement(int arr[],int n, int k){
//      priority_queue<int,vector<int>,greater<int>>pq;

//      for(int i=0;i<k;i++){
//         pq.top(arr[i]);

//      }

//      for(int i=k;i<n;i++){
//         int element = arr[i];
//         if(element>pq.top()){
//             pq.pop();
//             pq.push(arr[element]);

//         }
//      }

//      int ans = pq.top();
//      return ans; 

// }


// int getkthsmallestelement(int arr[],int n,int k){
//     priority_queue<int>pq; 
    
//     for(int i=0;i<k;i++){
//         pq.push(arr[i]);

//     }

//     for(int i=k;i<n;i++){
//         int element = arr[i];
//         if(element<pq.top()){
//             pq.pop(); 
//             pq.push(element);

//         }
//     }

//     int ans = pq.top();
//     return ans; 


// }





int getkthsmallestelement(int arr[],int n,int k){
    // create priority queue: 

    priority_queue<int>pq;
    // insert initial kth element of array  :
    for(int i = 0;i<k;i++){
        pq.push(arr[i]);

    }
    // for remaining element push only if they are less than top : 
    for(int i=k;i<n;i++){
        int element = arr[i];
        if(element<pq.top()){
            pq.pop();
            pq.push(element);

        }
    }
    int ans = pq.top();
    return ans;
    }




int main(){
priority_queue<int>pq;



// pq.push(3);
// pq.push(3);

cout<<"top element : "<<pq.top()<<endl;
pq.pop();
cout<<"top element : "<<pq.top()<<endl;



priority_queue<int,vector<int>,greater<int>>pq;
pq.push(3);
pq.push(6);
pq.push(9);
pq.push(4);
pq.push(8);

cout<<"top element is : "<<pq.top()<<endl;




// kth smallest element : 
int arr[]={10,5,20,4,15};
int n = 5;
int k = 0  ;
int ans = getkthgreatestelement(arr,n,k);
cout<<"Ans is : "<<ans<<endl;

 return 0;
} 






int main(){
    // max heap
    priority_queue<int>pq; 
    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);

    cout<<"top element: "<<pq.top()<<endl;


// min heap 
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);

cout<<"top element:"<<pq.top()<<endl;
pq.pop();
cout<<"size:"<<pq.size()<<endl;



// kth smallest element: 
int arr[]={
10,5,20,4,50
}

int n = 5; 
int k =2; 
int ans = getkthSmallestelement(arr,n,k);



    return 0; 
}


