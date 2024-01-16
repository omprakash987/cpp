#include <iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;


// bool checksorted(vector<int>&v,int &n,int i){
//     /// base case
//     if(i==n-1){
//         return true;
//     }

//     // 1 case solve karna hai 
//     if(v[i+1]<v[i]){
//         return false;
//     }

//     // baki recursion sambhal lega
//     return checksorted(v,n,i+1);
// }



// int binarysearch(vector<int>&v,int s, int e,int &key){
//     //base case
//     //case 1 -> key not found 

//     if (s>e)
//     return -1;

//     int mid=s+(e-s)/2;

//     // case 2 -> key found

//     if(v[mid]==key)
//     return mid;


// if(v[mid]<key){
//     return binarysearch(v,mid+1,e,key);
// }
// else{
//     return binarysearch(v,s,mid-1,key);
// }
    
// }



// void printsubsequence(string str, string output,int i){
//     //base case
//     if(i>=str.length()){
//         cout<<output<<endl;
//         return;
//     }

    
//     //exclude
//     printsubsequence(str,output,i+1);


// //include
// output.push_back(str[i]);
// printsubsequence(str,output,i+1);
// }

// int main(){


// // check arr is sorted or not 



// //    vector<int>v{2};
// //    int n=v.size();
// //    int i=0;

// //    bool issorted= checksorted (v,n, i);
// //    if(issorted){
// //     cout<<"Array is sorted"<<endl;
// //    }
// //    else{
// //     cout<<"Array is not sorted"<<endl;
// //    }




// // Recursion in binarysearch:
// //  vector<int>v{10,20,40,60,70,90,99};
// // int n=v.size();
// // int target = 99;


// // int s=0;
// // int e=n-1;
// // int ans=binarysearch(v,s,e,target);

// // cout<<"answer is : "<<ans<<endl;




// // subsequence of a string


// string str ="abcd";
// string output = "";

// int i=0;
// printsubsequence(str,output,i);





//     return 0;
// }

bool checksorted(vector<int>&arr,int &size, int i){
    if(i==size-1){
        return true;

    }
    if(arr[i+1]<arr[i]){
        return false;

    }

  return checksorted(arr,size,i+1);
}


int binarysearch(vector<int>&v,int s,int e,int &target){
   
    if(s>=e){
        return -1;
    }
     int mid = (s+e)/2;

    if(v[mid]==target){
        return mid;
    }
    if(target>v[mid]){
        return binarysearch(v,mid+1,e,target);
    }
    else{
        return binarysearch(v,s,mid-1,target);
    }
}




// void printsubset(string str, string output, int i){
//     if(i>=str.length()){
//        cout<<output<<",";
//        return ;
//     }

//     //exclude
//     printsubset(str,output,i+1);

//     // include
//     output.push_back(str[i]);
//     printsubset(str,output,i+1);
// }


void printsubset(string str, string output,int i){
    if(i>=str.length()){
        cout<<output<<endl;
        return ;

    }

//     exclude
printsubset(str,output,i+1);

// include
output.push_back(str[i]);
printsubset(str,output,i+1);

}

int main(){

// vector<int >arr{2,4,5,6,9,7};
// int size = arr.size();
// int i=0;

// if(checksorted(arr,size,i)){
//     cout<<"array is sorted"<<endl;
// }
// else{
//     cout<<"array is not sorted"<<endl;
// }



// vector<int>v{3,4,2,7,9,6};

// int s=0;
// int e= v.size()-1;
// int target = 9;

// int ans = binarysearch(v,s,e,target);

// cout<<"answer is : "<<ans<<endl;


string str = "abc";
string output = "";
int i=0;
printsubset(str,output,i);
    return 0;
}