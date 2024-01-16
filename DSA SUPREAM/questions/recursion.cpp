#include<iostream>
#include<limits.h>
#include<algorithm>
#include<vector>

using namespace std; 

int factorial(int n){
    if(n==1){
        return 1; 
    }
    return n*factorial(n-1);

}


void  counting(int n){
    if(n==0){
        return; 
    }

    cout<<n<<" "; 

 counting(n-1); 
}


int  fibonacii(int n)
{
if(n==1){
    return 0; 
}
if(n==2){
    return 1;
}

return fibonacii(n-1)+fibonacii(n-2); 



}

void print(int array[],int size , int i ){
    if(i>=size){
        return ; 

    }

    cout<<array[i]<<" "; 
    print(array,size,++i); 


}

void findMax(int array[],int size , int i ,int &mini){
    if(i>=size){
        return; 

    }
        
        if(array[i]<mini){
            mini = array[i]; 
              
        }
        findMax(array,size,i+1,mini);  
}


bool find(string &str, int i){
    

    if(i>=str.length()){
        return false; 


    }

if(str[i]=='k'){
    return true; 

}

  find(str,i+1); 
 
}

void printdigit(int n){
    if(n==0){
        return ; 

    }


int newvalue = n/10; 
printdigit(newvalue); 

int digit = n%10; 
cout<<digit<<" "; 


}

bool isSorted(int arr[],int size,int i ){
if(i==size-1){
    return true; 

}
if(arr[i]>arr[i+1]){
    return false; 

}
return isSorted(arr,size,i+1);
}


int binarySearch(vector<int>&v,int s ,int e,int key){
    if(s>e){
        return -1; 

    }
    int mid = (s+e)/2; 

    if(v[mid]==key){
        return mid; 
    }
    if(v[mid]<key){
       return binarySearch(v,mid+1,e,key); 

    }

     else{
       return binarySearch(v,s,mid-1,key); 
        
    }
}


int main(){

vector<int>v{10,20,30,40,50}; 
int target =40; 
int s =0;
int n = v.size(); 

int e = n-1; 
int ans = binarySearch(v,s,e,target); 
cout<<ans<<" "<<endl; 


    return 0; 
}