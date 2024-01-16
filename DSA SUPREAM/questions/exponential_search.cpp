#include<iostream>
using namespace std; 
int bs(int a[],int s,int e , int x){
    while(s<=e){
        int mid = (s+e)/2; 
        if(a[mid]==x){
            return mid; 

        }
        else if(x>a[mid]){
            s = mid+1; 

        }
        else{
           e =  mid-1;
        }
    }
    return -1; 

}

int expo(int a[],int n,int x){
    if(a[0]==x){
        return 0;
    }
    int i=1; 
    while(i<n&&a[i]<=x){
        i = i*2; 

    }
    return bs(a,i/2,min(i,n-1),x);

}

int main(){

    int a[]={3,4,5,6,11,13,14,15,56,70};
    int n = sizeof(a)/sizeof(a[0]);
    int x =15; 
    int ans = expo(a,n,x);

    cout<<ans<<endl;


    return 0;
}



    // int array1[]={1200,200,2300,1230,1543};
    // int array2[] = {12,14,16,18,20};
    // int temp,result =0; 

// int main(){

//     for(temp =0;temp<5;temp++){
//         result+=array1[temp];

//     }

//     for(temp =0;temp<4;temp++){
//         result+=array2[temp];
        
//     }
//     cout<<result;
//     return 0; 

// }