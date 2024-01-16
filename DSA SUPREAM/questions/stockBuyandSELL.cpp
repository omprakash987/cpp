#include<iostream>
#include<algorithm>
#include<limits.h>

using namespace std; 

int findmaxprofit(int price[],int size){
    int ans =0;
    int maxi = INT_MIN ;
    for(int i=0;i<=size-1;i++){
        for(int j=i+1;j<=size-1;j++){
          int   diff = price[j]-price[i]; 
          
          if(ans<diff){
            ans = diff;
            
          }


        }
    }

    return ans ;
}


int findmaxprofit1(int price[],int size,int i,int j){
    int ans =0; 
    // base case: 
if(i>=size){
    return 0; 

}




    // ek case: 
    int diff = price[j]-price[i];
    if(ans<diff){
        ans = diff; 

    }

  findmaxprofit1(price,size,i,j+1);
  return ans; 


    
  
}
int main(){

    int price[] ={7,6,4,3,1};
    int size = 5; 
    int i =0 ; 
    int j =i+1; 


  int ans =  findmaxprofit1(price,size,i,j); 
  cout<<ans<<endl; 






    return 0; 

}