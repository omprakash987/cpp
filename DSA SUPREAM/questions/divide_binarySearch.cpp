#include<iostream>
using namespace std; 
int main(){
int row =5; 

  for(int i=0;i<row;i++){
    cout<<"*";
  }
    return 0; 

}


// int solve(int dividend,int divisor){
//     int s=0; 
//     int e =dividend;
//     int mid=(s+e)/2;
//     int ans =-1; 

//     while(s<e){
//         if(abs(mid*divisor)==dividend){
//             return mid;

//         }
//         else if(abs(mid*divisor)>dividend){
//             // left: 
//             e = mid-1; 

//         }
//         else{
//             ans =mid; 
//             s = mid+1; 

//         }
//         mid = (s+e)/2;

//     }
//     if((divisor<0 && dividend<0)||(divisor>0&&dividend>0)){
//         return ans; 

//     }
//     else{
//         return ans; 

//     }
    
// }

// int main(){

// int dividend =-7;


// int divisor=2; 


// int ans =solve(dividend,divisor);
// cout<<"the ans is : "  <<ans<<endl;


//     return 0;

// }