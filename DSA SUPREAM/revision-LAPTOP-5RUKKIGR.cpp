#include <iostream>
#include <string.h>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std; 


// int main(){
//   int n=4; 
// for(int row =0;row<n+1;row++){
//   for(int col = 0;col<row;col++){
//     cout<<"*";
//   }
//   cout<<endl;

// }

//   return 0; 
// }



int find(int arr[],int n){



 int jump =0; 
      int kitnakudnahai;
       for(int i=0;i<n;){
           arr[i]= kitnakudnahai; 
           jump +=kitnakudnahai; 
           i = arr[jump++];
           jump =0; 
           
           
       }
       return jump ; 

}

int main(){

//  int n =9; 
//  for(int row =1; row<n;row++){
//   for(int col =row;col<=2*row-1;col++){
//     cout<<col<<" ";
//   }
//   cout<<endl;
//  }/


int arr[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
int n = 11;

cout<<find(arr,n);







  return 0; 

}




