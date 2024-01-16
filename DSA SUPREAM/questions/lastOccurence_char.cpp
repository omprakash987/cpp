#include<iostream>
using namespace std; 

int findLastOccurence(string str,char p,int i ){
   

    if(i<0){
        return -1;
    }

    if(str[i]==p){
        return i;
    }

   return  findLastOccurence(str,p,i-1); 


}

int main(){


// string str = "akjsdfha"; 
// char p = 'a';
// int i =str.size()-1; 


// int ans = findLastOccurence(str,p,i); 
// cout<<ans<<endl; 
string str = "ashgskdhghksdhgh"; 
string str1 = "xjkdfb"; 

size_t ans = str.find(str1); 


if(!ans){
    cout<<"ans is found"<<endl; 


}
else{
    cout<<"ans not found : "<<endl; 
}




    return 0; 

}