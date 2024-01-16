#include<iostream>
#include<vector>
using namespace std; 

// int fibonacii(int n){
    
//     if(n==1 || n==0){
//         return n; 
// }

//    int ans =  fibonacii(n-1)+fibonacii(n-2);
//    return ans; 


// }



// int topdown(int n, vector<int>&dp){
//     if(n==1 || n==0){
//         return n; 
//     }

//     if(dp[n] !=-1 ){
//         return dp[n];

//     }

//     dp[n] = topdown(n-1,dp)+topdown(n-2,dp);
//     return dp[n];

// }


// int bottomup(int n,vector<int>&dp){
//     if(n==1||n==0){
//         return n; 
//     }

//     dp[0]=0;
//     if(n==0)
//     return dp[0];
// dp[1]=1; 
// if(n==1)
// return dp[1];

// for(int i=2;i<=n;i++){
//     dp[i]=dp[i-1]+dp[i-2];
   
// }
// return dp[n];

// }


int spaceOptimization(int n){
    int prev2 = 0;
    int prev1 = 1;

    if(n==0)
    return prev2; 
if(n==1)

return prev1; 
    int curr; 

    for(int i=2;i<=n;i++){
        curr = prev2+prev1; 
        // shifting; 
        prev2=prev1 ; 
        prev1 = curr; 

    }
    return curr; 

}
int main(){
// int n=2;


// cout<<"the ans is: "<<fibonacii(n)<<endl;
int n=6; 

// vector<int>dp(n+1,-1);
// cout<<bottomup(n,dp);

// cout<<topdown(n,dp);

cout<<spaceOptimization(n);

    return 0; 
}



