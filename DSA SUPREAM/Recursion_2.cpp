#include <iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;


// int climbstair(int n){
//     if(n==0){
//         return 1;
//     }
//     if(n==1){
//         return 1;
//     }
//     int ans =climbstair(n-1)+climbstair(n-2);
//     return ans;
// }

// void print(int arr[],int n,int i){
//     // Base case:
//     if(i>=n){
//         return;
//     }

    
//     //baki recursion sambhal lega
//      print(arr,n,i+1);

//      // 1 case solved

//     cout<<arr[i]<<" ";

// }

// void findmax(int arr[],int n , int i , int& maxi){
//     //base case ;
//     if(i>=n){
//         //array agar khatm hogya .poora traverse hogya
//         //toh wapas aajoo
//         return;
//     }

//     // 1 case solve karna h
//     // current element ko check karo for max 
//     if(arr[i]>maxi){
//        maxi=arr[i];
//     }
//     // baki recursion sambhal lega
//     findmax(arr,n,i+1,maxi);

// }
// bool checkkey (string& str,int& i , int& n , char& key){
//     //base case
//     if(i>=n){
//         //key not found
//         return false;
//     }

//     // 1 case solve kardo 
//     if(str[i]==key){
//         return true;
//     }

//     //baki recursion sambhal lega
// int newi=i+1;
//     return checkkey(str,newi,i+1,n,key);


// }

// int main(){

// // Climb stairs 

// // int n ;

// // cout<<"enter the value of n :"<<endl;
// // cin>>n;

// // int ans =climbstair(n);
// // cout<<"Answer is : "<<ans<<endl;

// //     return 0;

// // Print array by using recursion 

// // int arr[5]={10,20,30,40,50};
// // int n=5;
// // int i=0;
// // print(arr,n,i);

// // return 0;



// // find max element in arr

// // int arr[]={10,20,30,40,50};
// // int n=5;
// // int maxi=INT_MIN;
// // int i=0;
// // findmax(arr,n,i,maxi);


// // cout<<"maximum element is : "<<maxi<<endl;

// // return 0;




// string str="omprakash";
// int n =str.length();

// char key = 'n';

// int i=0;

// bool ans = checkkey(str,i,n,key);
// cout<<"answer is : "<<ans<<endl;

    
// }


int climbstairs(int n){

    if (n==0){
        return 1;

    }
    if(n==1){
        return 1;

    }
    int ans =  climbstairs(n-1)+climbstairs(n-2);
    return ans;

}

void printarr(int arr[],int size, int i){

    if(i>=size){
        return ;
       
    }
     printarr(arr,size,i+1);
    
    cout<<arr[i]<<endl;

}


void findmaxi(int arr[], int size, int i, int &maxi){
    if(i>=size){
        return ;
    }

    if(arr[i]>maxi){
       maxi = arr[i] ;
    }

    findmaxi(arr,size,i+1,maxi);

}


int  checkkey(string &str, int &n, int i, char& key){
    if(i>=n){
        return -1;

    }
    if (str[i]==key){
        return i;

    }
    
    return checkkey(str,n,i+1,key);
}

 int main(){

string str = "omprakash";
int n = str.length();

char key = 'a';

int i=0;
int  ans = checkkey (str,n,i,key);
cout<<ans<<endl;

    return 0;
 }