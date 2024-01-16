#include <iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

int factorial( int n){
cout<<"function is called for "<<n<<endl;

    //base case
    if(n==1){
        return 1;
    }
   int ans=n*factorial(n-1);
    return ans;
}

void printcounting(int n){
    //base case
    if(n==0){
        return;
    }

    //processing 
    cout<<n<<" ";

    //recursive relation 
    printcounting(n-1);

}

int fibbonacci(int n){



    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

   

    return fibbonacci(n-1)+fibbonacci(n-2);
}

int main(){
//  int n;
// cout<<"enter the value of n : "<<endl;
// cin>>n;

//  int ans=factorial(n);

// cout<<"Answer is : "<<ans<<endl;


// int n;
// cout<<"enter the value of n : "<<endl;
// cin>>n;

// printcounting(n);

int n;
cout<<"enter the value of n : "<<endl;
cin>>n;

int ans=fibbonacci(n);
cout<<"Answer is : "<<ans<<endl;


    return 0;
}