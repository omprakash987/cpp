#include<iostream>
#include<queue>
#include<vector>
using namespace std;


// merg k sorted array ; 


class info{
    public: 
    int data; 
    int row; 
    int col ; 

    info(int val,int r, int c){
        data = val ; 
        row = r; 
        col = c; 

    }
};

class compare{
    public: bool operator()(info*a,info*b){
        return a->data > b->data;

    }
};

vector<int> mergeKSortedArray(int arr[][4],int k , int n){
priority_queue<info*,vector<info*>,compare>minHeap;

// insert first element of every array 

for(int i=0; i<k;i++){
    info*temp = new info(arr[i][0],i,0);
    minHeap.push(temp);

}

vector<int>ans; 

while (!minHeap.empty())
{
   info* temp = minHeap.top();
   int topElement = temp->data; 
   int topRow = temp->row; 
   int topCol = temp ->col; 
   minHeap.pop();

   ans.push_back(topElement);

   if(topCol + 1<n){
    info* newInfo = new info(arr[topRow][topCol+1], topRow,topCol+1);

    minHeap.push(newInfo);

   }
}

return ans; 


}



// merge K sorted LL

// class compare{
//      public: 
//      bool operator()(ListNode* a, ListNode* b){
//          return a->val > b->val; 

//      }
//  };



// class Solution {
// public:


//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//          priority_queue<ListNode*,vector<ListNode*>,compare>minHeap;
//          int k = lists.size(); 
//          if(k==0){
//              return NULL; 

//          }
//          // first element of every LL ko insert kardo heap me 
//          for(int i=0;i<k; i++){
//              if(lists[i] !=NULL){
//                  minHeap.push(lists[i]);

//              }
//          }
//          ListNode* head = NULL; 
//          ListNode* tail = NULL ;
//          while(!minHeap.empty()){
//              ListNode*temp = minHeap.top();
//              minHeap.pop();

//              // temp may or may not ve the first element of answer LL list 
//               if (head == NULL){
//                   // temp ->first element of ans LL ; 
//                   head = temp ; 
//                   tail  = temp; 
//                   if(tail->next !=NULL){
//                       minHeap.push(tail->next);

//                   }
//               }

//               else{
//                   tail->next = temp; 
//                   tail = temp ; 
//                   if (tail->next != NULL){
//                       minHeap.push(tail->next);

//                   }
//               }
//          }

//          return head; 

//     }
// };






int main(){

int arr[][4]={
    {2,4,6,8},{1,3,5,7},{0,9,10,11}
};

int k = 3; 
int n =4; 

    
vector<int>ans = mergeKSortedArray(arr,k,n);
for(auto i: ans){
    cout<<i<<" ";

}
cout<<endl;


    return 0; 

}



