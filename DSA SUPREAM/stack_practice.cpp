#include<iostream>
#include<stack>
using namespace std;

// void insertAtBottom(stack<int>&s,int target){
//     if(s.empty()){
//         s.push(target);
//         return ;
//     }
//     int topElement = s.top();
//     s.pop();

//     // recursive call 
//     insertAtBottom(s,target);

//     // back track 
//     s.push(topElement);
//     }



// // int main(){
// // stack<int>s;
// // s.push(3);
// // s.push(6);
// // s.push(8);
// // s.push(9);
// // s.push(15);
// // // s.push(9);

// // // cout<<"stack before insertion is : "<<endl ;
// // // while(!s.empty()){
// // //     cout<<s.top()<<" ";
// // //     s.pop();
// // // }
// // // cout<<endl;



// // int target = s.top();
// // s.pop();
// // insertAtBottom(s,target);

// // cout<<"stack After insertion is : "<<endl;

// // while(!s.empty()){
// //     cout<<s.top()<<" ";
// //     s.pop();
// // }
// // cout<<endl;


// //     return 0 ;

// // }





// // INSERT AT BOTTOM : 

// // void reverse(stack<int>&s){
// //     if(s.empty()){
// //         return ;
// //     }
// //     int target = s.top();
// //     s.pop();

// //     // recursion call : 
// //     reverse(s);

// //     // insertion : 
// //     insertAtBottom(s,target);
// // }

// // int main(){
// // stack <int>s;
// // s.push(4);
// // s.push(3);
// // s.push(7);
// // s.push(2);

// // cout<<endl;
// // cout<<"Stack After reversing : ";
// // reverse(s);
// // while(!s.empty()){
// //     cout<<s.top()<<" ";
// //     s.pop();

// // }

// //     return 0;

// // }





// // Sort the stack : 



// void insertsorted(stack<int>&s,int target){
//     if(s.empty()){
//         s.push(target);
//         return ;
//     }
//     if(s.top()>=target){
//         s.push(target);
//         return ;

//     }

//     int topElement = s.top();
//     s.pop();
    
//     insertsorted(s,target);

//     s.push(topElement);
   
// }



// void sortStack(stack<int>&s){
//     // base case : 
//     if(s.empty()){
//         return ;

//     }
//     int topElement = s.top();
//     s.pop();

//     // recrursive call : 

//     sortStack(s);

//     // insertion : 
//     insertsorted(s,topElement);

// }

// int main(){
//     stack<int>s;
//     s.push(4);
//     s.push(3);
//     s.push(7);
//     s.push(2);

//     sortStack(s);
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();

//     }
//     cout<<endl;
// }

class Stack{
    public: 
    int *arr;
    int top;
    int size; 

    Stack(int size){
        arr = new int[size];
        this->size = size; 
        top = -1;

    }


    void push(int data){
        // check empty
        if(size-top>1){
            top++;
            arr[top]=data;


        }
           else{
            cout<<"satck is underflow : "<<endl;

           }
    }

};

int main(){
Stack s(34);




s.push(5);
cout<<arr[top]<<endl;

    return 0;
}
