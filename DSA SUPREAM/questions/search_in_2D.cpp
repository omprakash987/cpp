#include<iostream>
using namespace std; 


bool find(int arr[][4],int m,int n,int target){
    int s =0; 
    int totalsize = (m*n);
    int e = totalsize-1; 
    int mid = (s+e)/2;

    while(s<=e){
        int rowIndex = mid/m; 
        int colIndex = mid%m; 
        int element = arr[rowIndex][colIndex]; 

        if(element==target){
            return true; 

        }
        if(element>target){
            e = mid-1; 

        }
        else{
            s = mid+1; 

        }
        mid = (s+e)/2;
    }
    return false; 


}



int main(){

int arr[5][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16},
    {17,18,19,20}
};
int m = 5; 
int n=4;


int target = 200; 

int ans = find(arr,m,n,target); 
cout<<"the ans is:"<<endl;

cout<<ans<<endl;


    return 0; 

}