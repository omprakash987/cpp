#include<iostream>
#include<vector>
using namespace std; 
void printsubarray_util(vector<int>v,int start,int end){
    // base: 
   
    if(end == v.size()){
        return; 

    }
    // 1 case: 
    for(int i = start;i<=end;i++){
        cout<<v[i]<<" "; 
    }
    cout<<endl; 

    // RE
    printsubarray_util(v,start,end+1); 

}


void printsubarray(vector<int>&v){
    for(int start =0;start<v.size();start++){
        int end = start; 
        printsubarray_util(v,start,end); 

    }
}

int main(){


vector<int>v{1,2,3,4,5}; 
 printsubarray(v ); 


    return 0; 

}