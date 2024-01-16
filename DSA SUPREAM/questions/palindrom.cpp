#include<iostream>
using namespace std; 
bool ispalindrom(string str){
    int s =0; 
    int e = str.size()-1; 
    while(s<=e){
        if(str[s]== str[e]){
            s++; 
            e--; 

        }
        else{
            return false; 

        }
    }
    return true; 

}


bool ispalindrom1(string str,int s ,int e){
    if(s>=e){
        return true; 

    }

    if(str[s] != str[e]){
        return false; 

    }

    return ispalindrom1(str,s+1 , e-1); 

}


int main(){

string str ; 
cout<<"enter the value of string : "<<endl  ; 
cin>>str; 
int i =0; 
int s=0; 
int e = str.size()-1; 


cout<<ispalindrom1(str,s,e)<<endl; 


    return 0; 

}