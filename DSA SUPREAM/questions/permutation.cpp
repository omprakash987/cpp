#include<iostream>
using namespace std; 

// void fintPermutation(string &s ,int i){
//     if(i>=s.length()){
//         cout<<s<<" "; 

//   return ;
//     }
  
//   for(int j=i;j<s.length();j++){
//     swap(s[i],s[j]); 

//     fintPermutation(s,i+1); 

//     // backtracking: 
//     swap(s[i],s[j]); 


//   }
// }


void fintPermutation(string &s, int i){
  if(i>=s.size()){

   cout<<s<<" "; 
   

  }

  for(int j =i;j<s.size();j++){
    swap(s[i],s[j]); 
    fintPermutation(s,i+1) ;

    // backtraking; 
    swap(s[i],s[j]); 


  }

}


int main(){

string s = "ahf";
int i=0;
fintPermutation(s,i); 



    return 0; 

}