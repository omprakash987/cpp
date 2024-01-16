#include<iostream>
using namespace std;

void find(string &s, string &part){

    int found = s.find(part); 

    if(found != string::npos){
        string left = s.substr(0,found); 
        string right = s.substr(found+part.size(),s.size()); 

        s = left + right; 

        find(s,part); 

    }
    else{
        return; 

    }

    
}
 

 int main(){

    string s = "abcaksdhghsbasabcksghabcks"; 
    string part = "abc"; 

    find(s,part); 


    // int found = s.find(part); 

    // while(found!=string::npos){
    //     s.erase(found,part.size()); 
    //     found = s.find(part); 

    // }
    // cout<<s<<endl; 


cout<<s<<endl; 


    return 0; 

 }