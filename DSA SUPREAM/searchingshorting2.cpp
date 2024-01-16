#include<iostream>
#include<algorithm>
#include<limits.h>
#include<vector>
using namespace std;
// int findpiviot(vector<int>arr){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(mid+1<arr.size()&&arr[mid]>arr[mid+1])
//             return mid;
//             if(mid-1>=0&&arr[mid-1]>arr[mid])
//             return mid-1;
        
//         if(arr[s]>=arr[mid])
//         e=mid-1;
//         else
//         s=mid+1;
//         mid=s+(e-s)/2;

//         }
//         return -1;

//     }



// int main(){

// //Find the pivit element in an array
// vector<int>arr{3,4,5,6,7,1,2};
// int ans=findpiviot(arr);


// cout<<"index of piviot element is :"<<ans <<endl;




//     return 0;
// }


//  Q2.) Squareroot of a no using binary search 

findsqrt(int n){
    int s=0;
    int target=n;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(target==mid*mid){
            return mid;
        }
        else if(mid*mid>target){
            //left search
            e=mid-1;

        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    // return ans;
}


int main(){
vector<int>arr{1,2,3,4,5,6,7,8,9};
int target=27 ;
int ans=findsqrt(arr,target);
cout<<ans<<endl;


    return 0;
}



//  square root of a no 

int main(){
int  n;
cout<<"Enter the number"<<endl;
cin>>n;

int ans=findsqrt(n);
cout<<"Ans is "<<ans<<endl;

int precision;
cout<<"enter thr no of floting digit in precison"<<endl;
cin>>precision ;

double step =0.1;
double finalans=ans;
for(int i=0;i<precision;i++){
    for(double j=finalans;j*j<=n;j=j+step){
        finalans=j;
    }
    step=step/10;

}
cout<<"final ans is. "<<finalans<<endl;



    return 0;

}


// Binary search in 2-D Array 
// bool binarysearch(int arr[][4],int row,int col,int target){
//         int s=0;
//         int e=row*col-1;
//         int mid=s+(e-s)/2;

//         while(s<=e){
//             int rowindex=mid/col;
//             int colindex=mid%col;

//             if(arr[rowindex][colindex]==target){
//                 cout<<"found at index : "<<"("<<rowindex<<","<<colindex<<")" <<endl;
//                 return true;
//             }
//             if(arr[rowindex][colindex]<target){
//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }
//             mid=s+(e-s)/2;
//         }
//         return false;
// }
    

// int main(){
//     int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
//     int row=5;
//     int col=4;

//     int target=19;

//     bool ans =binarysearch(arr,row,col,target);
//     if(ans){
//         cout<<"found"<<endl;
//     }
//     else{
//         cout<<"Not found";
//     }
       
    
// }