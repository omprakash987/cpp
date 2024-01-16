#include<iostream>
#include<limits.h>
using namespace std;

// int arr[53];
// char a[106];
// bool b[67];
// cout<<arr<<endl;
// cout<<&arr<<endl;
// cout<<"array created sucessfully";

// int arr[5]={1,2,3,4,5};
// for(int i=0;i<5;i++){
//     cout<<arr[i]<<endl;
// }

// int arr[10];
// cout<<"enter the input value in array"<<endl;
// for(int i=0;i<10;i++){
//    cin>>arr[i];
//    cout<<arr[i]<<endl;
// }

// int arr[5]={1,2,3,4,5};
// for (int i=0;i<5;i++){
//     //printing the double of each value of array
//     cout<<arr[i]*2<<endl;
// }

// int arr[5]={1,3,5,7,9};
// for(int i=0;i<5;i++){
//     arr[i]=1;
//     cout<<arr[i]<<endl;
// }

//Array & function

// void printarr(int arr[],int size){
//     for (int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void inc(int arr[],int size){
//     arr[0]=arr[0]+10;
// }

// int main(){


// int arr[]={5,6};
// int size =2;
// inc(arr,size);
// printarr(arr,size);



//     return 0; 
// }

//Linear search in array


// bool find(int arr[],int size,int key);
// int main(){
// int arr[]={1,2,3,4,4,6,7,8,9,10,11};
// int size=11;
// cout<<"write a no that you have to found"<<endl;
// int key;
// cin>>key;
// if(find(arr,size,key)){
//     cout<<"found";
// }
// else{
//     cout<<"not found";
// }

//     return 0;
// }
// bool find(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key)
//         return true;
//   }
//     //not present
//    return false;
     
// }


//counting 0 and 1;

// int arr[]={0,0,0,0,1,1,1,0,1,1,1,1};
// int size=12;
// int main(){
// int count0=0;
// int count1=0;
// for (int i=0;i<size;i++){
//     if (arr[i]==0){
//        count0++;
//     }
//     else{
//         count1++;
//     }
   
// }
//   cout<<count0<<endl;
//     cout<<count1<<endl;

//     return 0;
// }


//finding max no in arr 

// int main(){
//     int arr[]={2,4,4,5,4,6,7,7,5,80,6,8,9,3,15};
//     int size=15;
//     int maxi=INT_MIN;
// for(int i=0;i<size;i++){
// if(arr[i]>maxi){
//     //found a number greater then maxi, update maxi
//     maxi=arr[i];
// }
// }
// cout<<"maximum no is: "<<maxi<<endl;

//     return 0;
// }




// Extrime print in Array
// int main(){
//     int arr[]={2,3,4,2,5,6,7};
//     int size=7;
//     int start=0;
//     int end =size-1;

//    while(true){
//     if(start>end)
//     break;
//     if(start==end){
//         cout<<arr[start]<<" ";
//     }
//     else{

//     cout<<arr[start]<<" ";
//     cout<<arr[end]<<" ";
//     }
//     start++;
//     end--;
//    }


//     return 0;
// }




//reverse an array
// int main(){
// int arr[8]={10,20,30,40,50,60,70,80};
// int size=8;

// int start=0;
// int end=size-1;

// while(start<=end){
//     //stap 1
//     swap(arr[start],arr[end]);
//    // step2
//    start++;
//    end--;
// }
// //printing array
// for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=5;
//     for(int i=0;i<arr[i]/2;i++){
//        swap(arr[i],arr[size-1]);
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }


// 

// int main(){


// int arry[]={1,2,3,2,4,2,52,6,2,8,2,7,2,9,2};
// int size=15;
// int count=0;
// for(int i=0;i<size;i++){
    
//     if(arry[i]==2){
//         count++;
       
//     }
    
    
    
// }
//  cout<<"NO of 2 is present is :" << count<<endl;
// return 0;


// int arry[]={1,2,3,6,4,5,9,8,7};
// int size=9;
// int maxno=INT_MIN;
// for (int  i = 0; i < size; i++)
// {
//    if(arry[i]>maxno){
//     maxno=arry[i];

//    }
   
// }
// cout<<maxno<<endl;

//}

// int main(){

//     int arr[]={1,2,3,4,5,6,67,8,9};
//     int size=9;
//     int start=0;
//     int end=size -1;
//     while(true){
//         if(start>end){
//             break;
//         }
//         if(start==end){
//             cout<<arr[start]<<" ";
//         }
//         else{
//         cout<<arr[start]<<" ";
//         cout<<arr[end]<<" ";
//         }
//         start++;
//         end--;
        
//     }
//     return 0;
// }

 
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=5;
//     int start=0;
//     int end=size-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" "; 
//     }
// }


//linear search 


// int found(int arr[],int size,int n){
//     for(int i=0;i<size;i++){
//   if(arr[i]==n){
//     return true;
//   }
  
//   }
  
//     return false;

//     }



// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int size=6;
//    int n;
//    cin>>n;
//    if(found(arr,size,n)){
//     cout<<" found";
//    }
   

//    else{
//     cout<<" NOt found";
//    }
// }



// count 0's and 1's in Array;


         
        
       
    
    
   
// int main(){
//     int arr[]={1,2,3,2,4,2,5,2,6,2,7,2,8,2,9,2};
//     int size =16;
//     int n;
//     cin>>n;
    
//     int count =0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==n){
//             count++;
//         }
       
//     }
//     cout<<count<<endl;


//     return 0;
// }


//print max no in array

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int size=9;
//     int maxno=INT_MIN;
//     for(int i=0;i<size;i++){

    
//     if( arr[i]>maxno){
//         maxno=arr[i];

//     }
    

//     }
//     cout<<maxno;
    
// }


//Extreme point in array;

// int main(){
//     int arr[]={1,2,5,4,9,6,5,8};
//     int size=8;
//     int start=0;
//     int end=size-1;
//     while(true){
//         if(start>end){
//             break;
//         }
//    if(start==end){
//     cout<<arr[start];

    
    

//    }
//    else{
//     cout<<arr[start]<<" ";
//     cout<<arr[end]<<" ";
//    }
//    start++;
//    end--;
//     }

    
//     return 0;
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=5;
//     int start=0;
//     int end=size-1;
//     while(start<=end){ 
//         swap(arr[start],arr[end]);
//         start++;
//         end--;

//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

