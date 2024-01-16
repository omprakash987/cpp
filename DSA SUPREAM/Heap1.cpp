#include<iostream>
using namespace std;

// // class Heap{
// //     public:
// //     int arr[101];
// //     int size;

// //     Heap(){
// //         size = 0 ;

// //     }

// //     void insert(int value){
// // // value insert in end;

// // size = size+1;
// // int index = size ;
// // arr[index]= value;

// // // is vallue ko place at right  position : 

// // while(index >1){
// //     int parentIndex = index/2;

// //     if(arr[index]> arr[parentIndex]){

// //         swap(arr[index], arr[parentIndex]);
// //         index = parentIndex;

// //     }
// //     else{
// //         break;
// //     }
// // }
// //     }



// //     // int delete(){
// //     //     // replace root node value with last node data ;
// //     //     arr[1]= arr[size];
// //     //     size--;

// //     //     // place root node ka data on its correct position : 
// //     //     int index = 1;
// //     //     while(index<size){
// //     //         int left = 2*index;
// //     //         int right = 2*index+1;

// //     //        int largest = index ;

// //     //        if(left<size &&arr[largest]<arr[left]){
// //     //         largest = left;

// //     //        }
// //     //        if(right<size && arr[largest]<arr[right]){
// //     //         largest  = right;

// //     //        }
// //     //        if(largest == index){
// //     //         // value corret position : 
// //     //         return 
// //     //        }
// //     //        else{

// //     //         swap(arr[index],arr[largest]);
// //     //         index = largest;


// //     //        }
// //     //         }

// //     //     }
// //     };



//     void heapify(int arr[],int n, int i){
//         int index = i;
//         int largest = index;

//         int leftIndex = 2*i;
//         int rightIndex = 2*i+1;

//         if(leftIndex<=n&& arr[largest]<arr[leftIndex])
//             {
//             largest = leftIndex;
            
//         }
//         if(rightIndex<=n && arr[largest]<arr[rightIndex]){
//             largest = rightIndex;

//         }
//         if(index != largest){
//             swap(arr[index],arr[largest]);
//             index = largest;
//             heapify(arr,n,index);

//         }
        
//     }


// void buildHeap(int arr[],int n){
//     for(int i=n/2;i>0;i--){
//         for(int i=n/2;i>0;i--){
//             heapify(arr,n,i);

//         }
//     }
// }



// void Heapsort(int arr[],int n){
//     int index = n;
    
//     while(n!=1){
//         swap(arr[1],arr[index]);
//         index--;
//         n--;
//         // heapfy: 
//         heapify(arr,n,1);

//     }

// }

// int main(){
// // Heap h ;
// // // h.arr[0]=-1;
// // // h.arr[1]=100;
// // // h.arr[2]=50;
// // // h.arr[3]=60;
// // // h.arr[4]=40;
// // // h.arr[5]=45;q

// // h.insert(50);
// // h.insert(30);
// // h.insert(80);
// // h.insert(40);
// // h.insert(60);
// // h.insert(100);

// // h.size = 5;

// // cout<<"print the heap"<<endl;

// // for(int i=0;i<h.size;i++){
// //     cout<<h.arr[i]<<" ";

// // }
// // cout<<endl;

// // h.insert(110);
// // cout<<endl<<"print the heap"<<endl;
// // for(int i=0;i<=h.size;i++){
// //     cout<<h.arr[i]<<" ";

// // }
// // cout<<endl;





// int arr[]= {-1,12,15,13,11,14,34,5,2,67,45,34,6,4,7};
// int n = 14;
// buildHeap(arr,n);

// cout<<"printint the heap"<<endl;
// for(int i=0;i<= n;i++){
//   cout<<arr[i]<<" ";
// }
// cout<<endl;

// Heapsort(arr,n);

// cout<<"printint the heap"<<endl;
// for(int i=0;i<= n;i++){
//   cout<<arr[i]<<" ";
// }
// cout<<endl;


//     return 0;
// }




// insertion in heap 

class Heap{
    public: 
    int arr[100];
    int size; 

    Heap(){
        size = 0;

    }

    void insert(int value){
        size = size+1;
        int index = size; 
        arr[index]=value; 

        // place at right pos: 
        while(index>1){
            int parentindex = index/2;

            if(arr[index]>arr[parentindex]){
                swap(arr[index],arr[parentindex]);
                index = parentindex;

            }
            else{
                break;

            }
        }
    }

// int delete(){
//     // replace root node 
//     arr[1]=arr[size];
//     size--;

//     // place root node at right posssiton 

//     int index = 1;
//     while(index<size){
//         int left = 2*index;
//         int right = 2*index+1; 

//         int largest = index; 
        
//         if(left <size &&arr[largest]<arr[left]){
//             largest = left;

//         }

//         if(right<size&& arr[largest]<arr[right]){
//             largest = right; 

//         }

//         if(largest == index){
//             // correct position

//             return ; 

//         }
//         else{
//             swap(arr[index],arr[largest]);
//             index = largest; 
//         }

//     }
// }



int delete(){
    arr[1]=arr[size];
    size--;

    int index=1; 
    while(index<size){
        int left = 2*index; 
        int right = 2*index+1; 
        
        int largest = index; 

        if(left<size&& arr[largest]<arr[left]){
            largest = left; 
        }

        if(right<size && arr[largest]<arr[right]){
            largest = right; 

        }

        if(largest == index){
            return ; 

        }

        else{
            swap(arr[largest],arr[index]);
            largest = index; 
                   }
    }
}



};


// void heapify(int arr[],int n,int i){
//     index =i;
//     int leftindex= 2*i;
//     int rightindex = 2*i+1;
//     int largest = index ; 


//     if(leftindex<=n && arr[largest]<arr[leftindex]){
//         largest = leftindex;

//     }

//      if(rightindex<=n && arr[largest]<arr[rightindex]){
//         largest = rightindex;
        
//     }

//     if(index!=largest){
//      swap(arr[index],arr[largest]);
//      index = largest; 
//      heapify(arr,n,index);


//     }
// }


void heapify(int arr[],int n, int i){
    int index = i; 
    int largest = index; 
    int leftIndex = 2*i; 
    int rightIndex = 2*i+1; 

    if(leftIndex<=n&& arr[largest]<arr[leftIndex]){
        index = largest; 

    }

     if(rightIndex<=n && arr[largest]<arr[rightIndex]){
        index = largest; 
        
    }

    if(index!=largest){
        swap(arr[largest],arr[index]);
        index = largest; 
        heapify(arr,n,i);

    }

}



// void buildheap(int arr[],int n){
//     for(int i=n/2;i>0;i--){

//         heapify(arr,n,i);
//     }
// }



void buildheap(int arr[],int n){
    for(int i=n/2; i>0;i--){
        heapify(arr,n);
    }
}


// void heapsort(int arr[],int n){
//     int index = n; 

//     while(n! = 1){
//         swap(arr[1],arr[index]){
//             index--;

//             n--;
//             // heapify: 
//             heapify(arr,n,1);

//         }

//     }
// }


void heapsort(int arr[],int n){
    int index = n; 

    while(n!=1){
        swap(arr[1],arr[index]){
            index--; 
            n--; 
            heapify(arr,n,1);
            
        }
    }
}

int main(){
    int arr[]={-1,12,15,13,11,14};

    int n = 5; 
    buildheap(arr,n);

    cout<<"printing the heap"<<endl;
    for(int i=0;i<=n;i++){
        cout<arr[i]<<" ";

    }
    cout<<endl;

}


// int main(){
//     Heap h; 
//     h.arr[0]=-1;
//     h.arr[1]=100;
//     h.arr[2]=50;
//     h.arr[3]=60;
//     h.arr[4]=40;
//     h.arr[5]=45;

//     h.size =5;

//     cout<<"printing the heap"<<endl;

//     for(int i=0;i<=h.size; i++){
//         cout<<h.arr[i]<<" ";
        
//             }
//             cout<<endl;

//             h.insert(110);
//             cout<<endl<<"printing the heap "<<endl;
//             for(int i=0;i<=h.size;i++){
//                 cout<<h.arr[i]<<" ";

//             }
//             cout<<endl;


// }





// // deletion in heap

