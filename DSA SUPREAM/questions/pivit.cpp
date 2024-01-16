#include<iostream>
using namespace std; 



int findpivitelement(int arr[],int n){
    int s =0;
    int e =n-1; 
    int mid = s+(e-s)/2; 

    while(s<e){
         
        if(arr[mid]>arr[mid+1]){
            return arr[mid];
        }
        else if(arr[mid]<arr[mid-1]){
            return arr[mid-1]; 

        }
        else if(arr[mid]<arr[mid+1]){
            s=mid+1; 

        }
        else{
            e = mid-1; 
        }



mid = s+(e-s)/2; 

    }
    return -1; 


  
}




int main(){


int arr[]={3,4,5,6,7,1,2};
int n =7; 

int ans = findpivitelement(arr,n);
cout<<ans; 





    return 0; 
}