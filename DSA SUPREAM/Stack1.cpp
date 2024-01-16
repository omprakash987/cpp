#include<iostream>
#include<stack>

using namespace std;

// void printMiddle(stack<int>&s,int&totalSize){
//     if(s.size()==0){
//         cout<<"there is no element in stack : "<<endl;
//     }
//     // base case;
//     if(s.size()== totalSize/2+1){
//         cout<<"Middle element is : "<< s.top()<<endl;
//         return ;
//     }
//     int temp = s.top();
//     s.pop();

//     // recursive call : 
//     printMiddle(s,totalSize);

//     // backtrack
//     s.push(temp);

// }

// int main(){
//     stack<int>s;

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);
//     s.push(70);
//      int totalsize = s.size();

//     printMiddle(s,totalsize);
//     return 0;
// }







// int main(){
//     string str = "babbar";

//     stack<char>s;
//     for(int i=0;i<str.length();i++){
//         s.push(str[i]);

//     }
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
//     return 0;
// }







// class Stack{
//     public: 
//     int *arr;
//     int size;
//     int top;
//     int top2;

//     stack(int size){
//         arr = new int[size];
//         this->size = size;
//         top1 =-1;
//         top2 = size;

//     }

// void push1(int data){
// if(top2-top1==1){
//     // space Not available
//     cout<<"OVERFLOW in stack 1 : "<<endl;
// }
// else{
// top1++;
// arr[top1]=data;
// }
// }

// void pop1(){
//    if(top1==-1){
//     // stack is empty
//     cout<<"underflow in stack 1  : "<<endl;
//    }
//    else{
//     // stack is not empty:
//     top1--;
//    }
// }

// void push2(int data){
//   if(top2-top1==1){
//     // space Not available
//     cout<<"overflow in stack 2 : "<<endl;

//   }
//   else{
//     top2--;
//     arr[top2]=data;
//   }
// }

// void pop2(){
// if(top2== size){
//     // space is NOt avaible
//     cout<<"underflow in stack 2 : "<<endl;

// }
// else{
//     // stack is not empty;
//     top2++;
// }
// }


// };







class Stack{
    public: 

    int *arr;
    int top;
    int size;

    Stack(int size){    
        arr = new int[size];
        this->size = size;
        top =-1;

    }

    void push(int data){
    if(size-top>1){
        // space available
        top++;
        arr[top]=data;

    }
    else{
        cout<<"Stack is overflow : "<<endl;
    }
    }

void pop(){
    if(top==-1){
        cout<<"stack underflow : "<<endl;

    }
    else{
        // stack is not empty
        top--;
    }

}

bool isempty(){
if(top == -1){
    return true;
}
else{
    return false;
}

}

int gettop(){
if(top==-1){
    cout<<"there is no element in stack : "<<endl;
}
else{
    return arr[top];
}
 
}

int getsize(){
return top+1;
} 


}; 

int main(){
   Stack s(34 );
 
    
    // insertion 
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

while(!s.isempty()){
    cout<<s.gettop()<<" ";
    s.pop();

}
cout<<endl;


cout<<"size of stack: "<<s.getsize()<<endl;
return 0;
}











// int main(){

    // creation
    // stack<int> st;

    // // insertion 
    // st.push(10);
    // st.push(20);
    //   st.push(30);
    //    st.push(40);

    //    //remove
    //    st.pop();

    //    //check
    //    cout<<"Element on top is : "<<st.top()<<endl;
       
    //    // size 
    //    cout<<"size of stack is : "<<st.size()<<endl;

    //    if(st.empty()){
    //     cout<<"stack is empty"<<endl;

    //    }
    //    else{
    //     cout<<"stack is non empty : "<<endl;
    //    }

      



    //   stack<int>s;
    //   s.push(10);
    //   s.push(20);
    //   s.push(30);
    //   s.push(40);

    //   while(!s.empty()){
    //     cout<<s.top()<<endl;
    //     s.pop();
       
    //   }






//     return 0;

// }