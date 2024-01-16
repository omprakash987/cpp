#include<iostream>
#include<vector>
using namespace std; 


// color the fence: 


// int  solveUsingRecursion(int n,int k){
//     if(n==1){
//         return k; 

//     }
//     if(n==2){
//         return (k+k*(k-1));

//     }
//     int ans =(solveUsingRecursion(n-2,k)+solveUsingRecursion(n-1,k))*(k-1);
//     return ans; 
// }


// int solveUsingmem(int n, int k, vector<int>&dp){
//      if(n==1){
//         return k; 

//     }
//     if(n==2){
//         return (k+k*(k-1));

//     }

//     if(dp[n]!=-1){
//         return dp[n];

//     }
//    dp[n] =(solveUsingmem(n-2,k,dp)+solveUsingmem(n-1,k,dp))*(k-1);
//     return dp[n] ;
// }



// int solveUsingTab(int n,int k ){
//     vector<int>dp(n+1,0);
//     dp[1]=k;
//     dp[2]=(k+k*(k-1));

//     for(int i=3;i<=n;i++){
//         dp[i]=(dp[i-2]+dp[i-1])*(k-1);

//     }
//     return dp[n];
// }


// int solvespace(int n, int k){

//    int prev2 = k;

//    int prev1=(k + k*(k-1));

//     for(int i=3;i<=n;i++){

//        int curr = (prev2 + prev1)*(k-1);
//        // shift -> yaha galti hoti hai: 

//        prev2 = prev1 ; 
//        prev1 = curr; 

//     }
//     return prev1;
// }
// int main(){
//     // int  n =4; 
//     // int k =3; 
//     // int ans = solveUsingRecursion(n,k);
//     // cout<<"ans : "<<ans <<endl;

// int n=4; 
// int k =3; 

// // vector<int>dp(n+1,-1);
// // int ans = solveUsingmem(n,k,dp);
// // cout<<"ans: "<<ans<<endl;
// int ans = solvespace(n,k);

// cout<<"ans: "<<ans<<endl;
//     return 0;
// }





// kanpsack problem : 

int solveUsingRecursion(int weight[],int value[],int index,int capacity){
    // base case: 
    if(index == 0){
        if(weight[0]<=capacity){
            return value[0];

        }
    }
        else{
            return 0; 

        }
        // include and exclude: 
        int include = 0; 
        if(weight[index]<=capacity)
            include = value[index]+solveUsingRecursion(weight,value,index-1,capacity-weight[index]);
        
        int exclude = 0 +solveUsingRecursion(weight,value,index-1,capacity);

    int ans = max(include,exclude);
    return ans; 

}

int main(){



    int weight[]={4,5,1};
    int value[]={1,2,3};
    int n = 3; 
    int capacity= 4; 
    int ans = solveUsingRecursion(weight,value,n-1,capacity);
    vector<vector<int>>dp(n,vector<int>(capacity+1,-1));
    
    cout<<"ans: "<<ans<<endl;
    return 0; 
}