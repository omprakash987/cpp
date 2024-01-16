#include<iostream>
using namespace std; 

int partition(int arr[],int s,int e){
    int pivotIndex =s; 
    int pivotElement  = arr[s]; 

    // step 2: fid right position fot pivot Element and place it there: 

    int count =0; 
    for(int i=s+1;i<=e;i++){
        if(arr[i]<= pivotElement){
            count++; 

        }
    }
    int rightIndex = s+count; 
    swap(arr[pivotIndex],arr[rightIndex]); 
    pivotIndex=rightIndex; 


    // step3: 
    int i=s; 
    int j =e; 
    while(i<pivotIndex && j> pivotIndex){
        while(arr[i]<=pivotElement){
            i++; 

        }
        while(arr[j]>pivotElement){
            j--; 

        }

        if(i<pivotIndex && j> pivotIndex){
            swap(arr[i],arr[j]); 

        }

    }return pivotIndex; 


}

void quicksort(int arr[],int s,int e){
    if(s>=e)return ; 
     
     // partitioin logic: 

    int p = partition(arr,s,e); 

     //left: 
     quicksort(arr,s,p-1); 


     //right:
     quicksort(arr,p+1,e); 



}
int main(){

int arr[]={8,1,3,4,20,50,30}; 
int n = 7; 

int s =0; 
int e = n-1; 


quicksort(arr,s,e); 


for(int i=0;i<n;i++){
    cout<<arr[i]<<" "; 

}
cout<<endl; 


    return 0; 

}