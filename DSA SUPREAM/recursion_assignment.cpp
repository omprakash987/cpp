#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

// void lastOccLtR(string&s,char x, int &ans,int i){
//     // base case;
// if(i>=s.length()){
//     return;
// }


//     // ek case 
//     if(s[i]==x){
//         ans = i;
//     }
//     lastOccLtR(s,x,ans,i+1);

    
// }

void lastOccRtL(string&s , char x, int &ans ,int i){
    // base case 
    if(i<=0){
        return ;

    }

    // ek case 

    if(s[i]==x){
         ans = i;
        return ;

    }
    lastOccRtL(s,x,ans,i-1);

  
}


void reverse(string&s,int start, int e,int &n){
 // base case
 if(start>e){
    return ;
 }

 // ek case
swap(s[start],s[e]);

 reverse(s,start+1,e-1,n);

 
}

bool check(string &s,int start, int e){
    // base case
    if(start>e){
        return true;
    }

    // ek case
   if(s[start] != s[e]){
    return false;
   }
   

    // recursion 

  return check(s,start+1,e-1);
}



void printsubarray_utill (vector<int >&nums,int start,int end){
// base case
if(end==nums.size()){
    return;
}

// ek case

for(int i=start;i<=end;i++){
    cout<<nums[i]<<" ";
} 
cout<<endl;

// recurction 
printsubarray_utill(nums,start,end+1);


}

void printsubarray(vector<int>&nums){
    for(int start =0;start<nums.size();start++){
        int end = start;
        printsubarray_utill(nums,start,end);

    }
}
int main(){

// last occurence of the character

// string s;
// cout<<"enter the string"<<endl;
// cin>>s;
// cout<<"enter the char you found"<<endl;
// char x;
// cin>>x;
// int i=s.size()-1;

// int ans =-1;
// lastOccRtL(s,x,ans,i);

//   cout<<ans<<endl;


// reverse a string RE

// string s;
// cout<<"enter the string"<<endl;
// cin>>s;

// int start =0;
// int e=s.size()-1;

// int n = s.size();

// reverse(s,start,e,n);

// cout<<s<<endl;


// check pallindrom 

// string s = "racecar";
// int start = 0 ;
// int e=s.size()-1;
// cout<<check(s,start,e)<<endl;




// print subarray

vector<int>nums{1,2,3,4,5};

printsubarray(nums);


    return 0;
}
