#include <iostream>
#include <queue>
using namespace std;

class Deque
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushRear(int data)
    {
        if (front == 0 && rear == size - 1)
        {
            cout << "Queue is full , and can't insert : " << endl;
        }
        if (rear == front - 1)
        {
            cout << "Queue is full , and can't insert :  " << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pushFront(int data)
    {
        if (front == 0 && rear == size - 1)
        {
            cout << "Queue is full , and can't insert : " << endl;
        }
        
        if (rear == front - 1)
        {
            cout << "Queue is full , and can't insert :  " << endl;
        }
        
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }

        arr[rear] = data;
    }

    void popFront()
    {
        if (front == -1)
        {
            cout << "Queue is empty cannot pop : " << endl;
        }

        else if (front == rear)
        {
            
            arr[front] = -1;
            front = -1;
            rear = -1;
        }

        else if (front == size - 1)
        {
             arr[front]=-1;
            front = 0;
        }
        else
        {
             arr[front]=-1;
            front++;
        }
       
    }

    void popRear()
    {
        if (front == -1)
        {
            cout << "Queue is empty cannot pop : " << endl;
        }

        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }

        else if (rear == 0)
        {
            arr[rear]=-1;
            rear = size - 1;
        }

        else
        {
            arr[rear]=-1;
            rear--;
        }
        
    }

    void print(){
    for(int i=0;i<size ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};



 


int main(){

Deque dq(10);


dq.pushRear(10);
dq.pushRear(20);
dq.pushRear(30);
dq.pushRear(40);

dq.pushRear(50);
dq.pushRear(60);
dq.pushRear(70);
dq.pushRear(80);
dq.pushRear(90);
dq.pushRear(100);



dq.print();

dq.popRear();
dq.print();

return 0;


}

// class CirQueue{
// public:
// int *arr;
// int size;
// int front;
// int rear;

// CirQueue(int size){
//     this->size = size ;
//     arr = new int [size];
//     front = -1;
//     rear = -1;

// }

// void push(){
//     // queue full :

//     // single element case -> first element

//     // circular nature

//     // normal flow :
//     if(front == 0 && rear == size-1){
//         cout<<"Queue is full , and can't insert : "<<endl;
//     }
//     if(rear == front -1){
//         cout<<"Queue is full , and can't insert :  "<<endl;
//     }
//     else if (front ==-1){
//         front = rear = 0;
//         arr[rear]= data;

//     }
//     else if (rear == size-1 && front != 0){
//         rear = 0 ;
//         arr[rear]=data;

//     }
//     else{
            // rear++;
            // arr[rear] = data;
//     }
// }

// void pop(){
//     // empty :
//     // single element:
//     // circular nature :
//     // Normal flow: 


//     if(front == -1){
//         cout<<"Queue is empty cannot pop : Underflow : "<<endl;

//     }
//      
//      if (rear == front-1){
//     cout<<" queue is empty we can't pop <<endl; 
// }

//     else if (front == rear){
//         arr[front] =-1;
//         front =-1;
//         rear =-1;

//     }

//    else if(front == size-1){
//     front =0;

//    }
//    else{
//     front++;
//     }
// }

// };

// class Queue{
//      public:
//      int *arr;
//      int size;
//      int front;
//      int rear ;

//      Queue(int size){
//         this->size = size;
//         arr = new int[size];
//         front = 0;
//         rear = 0;
//      }

//      void push(int data){
//         if(rear == size){
//             cout<<"Q is full : "<<endl;
//         }
//         else{
//             arr[rear]= data;
//             rear++;

//         }
//      }

//      void pop(){
//         if(front== rear){
//             cout<<"Q is empty : "<<endl;
//         }
//         else{
//             arr[front]=-1;

//             front++;

//             if(front==rear){
//                 front = 0;
//                 rear = 0;
//             }

//         }
//      }

//      int getfront(){
//         if(front == rear){
//             cout<<"Q is empty : "<<endl;
//             return -1;
//         }
//         else{
//             return arr[front];

//         }
//      }

//      bool isEmpty(){
//         if(front == rear){
//             return true;
//         }
//         else{
//             return false;

//         }
//      }

//      int getsize(){
//         return rear-front;
//      }

// };

// int main(){

// Queue q(10);

// q.push(5);
// q.push(1 4);
// q.push(3);
// q.push(2);
// q.push(1);

// cout<<"size of queue is : "<<q.getsize();
// cout<<endl;
// q.pop();
// cout<<"size of queue is : "<<q.getsize()<<endl;
// cout<<"front element is : "<<q.getfront()<<endl;

// cout<<"size of the queue : "<<q.size()<<endl;
// q.pop();
// cout<<"size of the queue : "<<q.size()<<endl;
// if(q.empty()){
//     cout<<" q is empty : "<<endl;

// }
// else{
//     cout<<"q is not empty : "<<endl;
// }

// cout<<q.front()<<endl;

// while(q.empty()){
//     cout<<q.front()<<" ";

// }
// cout<<endl;

//     return 0;
