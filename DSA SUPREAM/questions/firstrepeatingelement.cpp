#include<iostream>
using namespace std;


int firstrepeating_element(int arr[],int n){
    int hash[6];
    for(int i=0;i<n;i++){
        hash[arr[i]]++; 

    }

    for(int i=0;i<n;i++){
        if(hash[arr[i]]>1){
            return i+1;

        }
    }

    return -1; 
}



int main(){


int arr[]={1,5,3,4,3,5,6}; 
int n =7; 

int ans = firstrepeating_element(arr,n); 
cout<<ans<<endl;

    return 0; 

}