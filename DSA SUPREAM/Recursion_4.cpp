#include <iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

// int solve(vector<int >&arr, int target){
//     //base case 
//     if(target==0){
//         return 0;
//     }
//     if(target<0){
//         return INT_MAX;
//     }

//     // let's solve 1 case
//     int mini =INT_MAX;
//     for(int i=0;i<arr.size();i++){
//         int ans=solve(arr,target-arr[i]);
//         if(ans!=INT_MAX) 
//         mini=min(mini,ans+1);

//     }
//     return mini;
// }

// int solve(vector<int>&arr,int target){
//     // base case
//     if(target==0){
//         return 0;
//     }
//      if(target<0){
//         return INT_MAX;
//      }
//      // lets solce one case
//      int mini = INT_MAX;
//      for(int i=0;i<arr.size();i++){
//        int ans = solve(arr,target-arr[i]);
//        if(ans!=INT_MAX)
// mini = min(mini,ans+1);

//      }
//      return mini;

// }

// int solve (int n, int x , int y , int z){
//     // base case 

//     if(n==0){
//         return 0;
//     }

//     if(n<0){
//         return INT_MIN;

//     }
    
//     int ans1 = solve(n-x,x,y,z);
// int ans2 = solve(n-y,x,y,z);
// int ans3 = solve(n-z,x,y,z);

// int ans = max (ans1,max(ans2,ans3));
// return ans ;
//  }



void solve(vector<int>&arr,int sum,int &maxi,int i){
    // base case ;
    if(i>=arr.size()){
       maxi = max(sum,maxi);
       return ;
    }
// include

  solve(arr, sum+arr[i],maxi,i+2);

    // exclude
solve(arr,sum, maxi,i+1);



}



int main(){
// vector<int>arr{1,2,3};
// int target=5;

// int ans= solve(arr,target);
// cout<<"Answer is : "<<ans<<endl;

// return 0;


// vector<int>arr{1,2};
// int target = 5;
 
//  int ans = solve(arr,target);
//  cout<<"ans is : "<<ans <<endl;
// return 0;



// cut into segment



//     int n = 7;
//     int x= 5;
//     int y = 2;
//     int z = 2;
    
//     int ans = solve(n, x , y,z);

// if(ans <0 ){
//     ans =0;
// }
//     cout<<"ans is : "<<ans <<endl;

//     return 0;


// max sum of non adjecent element




// vector<int>arr{2,1,4,9};
// int sum = 0;
// int i=0;
// int maxi = INT_MIN;
// solve(arr,sum,maxi,i);


// cout<<maxi<<endl;
// return 0;


}


  
