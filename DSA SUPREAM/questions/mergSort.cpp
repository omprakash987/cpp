#include<iostream>
using namespace std;

void merge(int *arr,int size, int s,int mid,  int e){
     mid = (s+e)/2; 
    int len1 = mid-s+1; 
    int len2 = e-mid; 

    int *left = new int[len1]; 
    int *right = new int[len2]; 

    // copy 
    int k =s; 
    for(int i=0;i<len1;i++){
        left[i] = arr[k]; 
        k++; 

    }
    k = mid+1; 

    for(int i=0;i<len2;i++){
        right[i]= arr[k]; 
        k++; 

    }


    /// while LOOping : 
    int leftIndex =0; 
    int rightIndex=0; 
    int mainArray = s; 



    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex]<=right[rightIndex]){
            arr[mainArray++]=left[leftIndex++]; 


        }
        else{
            arr[mainArray++]=right[rightIndex++]; 


        }


    }
    while(leftIndex<len1){
        arr[mainArray++]=left[leftIndex++]; 

    }

while(rightIndex<len2){
    arr[mainArray++] = right[rightIndex++]; 

}


delete[] left; 
delete[] right; 



}

void mergesort(int *arr,int size,int s,int e){
    int mid = (s+e)/2; 

    if(s>=e){
        return ;
    }


    // left part: 
    mergesort(arr,size,s,mid); 

    // right part: 
    mergesort(arr, size,mid+1,e); 
    // merge the two parts.
    merge(arr,size,s,mid,e); 

}


int main(){

int arr[]= {11,2,3,14,5,65}; 
int size = 6; 
int s =0; 
int e = size-1; 

mergesort(arr,size,s,e); 

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

    return 0; 

}

// void merge(int *arr, int s ,int e ){
//     int mid = (s+e)/2; 
//    int len1 = mid-s+1; 
//    int len2 = e - mid; 

//    int *left = new int[len1]; 
//    int *right = new int[len2]; 

//    // copy : 
//    int k = s; 
//    for(int i=0;i<len1;i++){
//     left[i]=arr[k]; 
//     k++; 
// }


//    k=mid+1; 


// for(int i=0;i<len2;i++){
//     right[i]=arr[k]; 
//     k++;
// }


// // merge: 
// int leftIndex = 0; 
// int rightIndex = 0; 
// int mainAarray = s; 

// while(leftIndex<len1 && rightIndex<len2){
//     if(left[leftIndex]<right[rightIndex]){
//         arr[mainAarray++] = left[leftIndex++]; 
//  }
//  else{
//     arr[mainAarray++]=right[rightIndex++]; 

//  }

// }
// // copy logic for left array  : 
// while(leftIndex<len1){
//     arr[mainAarray++] = left[leftIndex++]; 


// }
// while(rightIndex<len2){
//     arr[mainAarray++]=right[rightIndex++]; 

// }
// delete[] left  ; 
// delete[] right ; 

// }

// void mergesort(int *arr,int s ,int e ){
//     // base case: 

//     if(s>=e){
//         return ;
//     }

// int mid = (s+e)/2; 

// // left part
// mergesort(arr,s,mid); 

// // right part: 
// mergesort(arr,mid+1,e); 

// //merge two sorted array 
// merge(arr,s,e); 
// }



// int main(){


// int arr[] = {4,34,-1,233,4,3,213,34}; 
// int n = 7; 
 
// int s =0; 
// int e =n-1; 

// mergesort (arr,s,e); 

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" "; 

// }
// cout<<endl; 

//     return 0; 

// }



