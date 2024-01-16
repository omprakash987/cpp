#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;



    //  Q1.)binary search in a nearly sorted array

// int binarysearch(vector<int>arr,int target){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;
//     while (s<=e)
//     {
//         if(arr[mid]==target){
//             return mid;

//         }
//         if(arr[mid-1]==target){
//             return mid-1;

//         }
//         if(arr[mid+1]==target){
//             return mid+1;
//         }
//         if(target>arr[mid]){
//           s=mid+1;


//         }
//         else{
//             e=mid-1;

//         }
//        mid=s+(e-s)/2;

//     }
//     return -1;
    
// }


// int main(){
// vector<int>arr{10,3,40,20,50,80,70};
// int target=400;

// int ans=binarysearch(arr,target);

// if(-1){
//     cout<<"Index Not found";
// }
// else{
// cout<<"index of "<<target <<" is "<<ans<<endl;
// }

//     return 0;
// }



// Q2.) Divide 2 number using binary search 
 
//  int solve(int dividend,int divisor){
//     int s=0;
//     int e=abs(dividend);
//     int mid=s+(e-s)/2;
//     int ans=1;

//     while (s<=e)
//     {//perfect solution
//         if(abs(mid*divisor)==abs(dividend)){
//             ans=mid;
//             break;
//         }
//         if(abs(mid*divisor)>abs(dividend)){
//             e=mid-1;

//         }
//        else{
//         ans=mid;
//         s=mid+1;

//        }
//         mid=s+(e-s)/2;

//         }
//         if((divisor<0&&dividend<0)||(divisor>0&&dividend>0))
//         return ans;
//         else{
//         return -ans;
//         }
//     }
   


// int main(){
// int dividend=19;
// int divisor=-19;

// int ans=solve(dividend,divisor);
// cout<<"the ans is : "<<ans<<endl;


//     return 0;
// }


//   Q3.)  Find the odd occuring element in an array.

int solve(vector<int>arr){
    int s=0;
    int e=arr.size()-1;

    int mid=s+(e-s)/2;
    while(s<=e){
        if(s==e){
            //single element
            return s;

        }
        // 2case --> mid-even odd
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }

        }
        else{
            if(arr[mid]==arr[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;
}


int main(){

vector<int>arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
int ans=solve(arr);
cout<<"Index is  : "<<ans<<endl;
cout<<"ans is : "<<arr[ans]<<endl;




    return 0;
}