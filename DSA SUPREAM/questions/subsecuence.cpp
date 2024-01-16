#include<iostream>
#include<algorithm>
#include<limits.h>
#include<vector>

using namespace std; 

void print(string str, string output,int i){
    if(i>=str.length()){
         
        return ; 

    }

    //exclude
    print(str,output,i+1); 
    //include
    output.push_back(str[i]); 
    print(str,output,i+1); 

}

int solve(vector<int>&arr,int target){
    if(target== 0){
        return 0; 

    }
    if(target<0){
        return INT_MAX; 
    }

    //let's solve 1 case: 
    int mini = INT_MAX; 
    for(int i=0;i<arr.size(); i++){
     int ans = solve(arr,target-arr[i]); 
     if(ans!=INT_MAX)
         mini = min(mini,ans+1); 
     


    }

    return mini;
}


int solveans(vector<int>&arr, int target,int output){
   


    if(output>target){
        return INT_MAX; 

    }
    

    int mini = INT_MAX; 
    for(int i=0;i<arr.size(); ++i){
      int ans =  solveans(arr,target,output+arr[i]);
if(ans!=INT_MAX){
  mini = min(ans+1,mini); 
}
    

 
    }
   return (mini == INT_MAX) ? mini : mini - output;



}

int cutsegment(int n, int x , int y , int z){
    if(n==0){
        return 0; 

    }
     

    
    if(n<0){
        return INT_MIN; 

    }
    int ans1 = cutsegment(n-x,x,y,z)+1;
    int ans2 = cutsegment(n-y,x,y,z)+1;
    int ans3 = cutsegment(n-z,x,y,z)+1;

 int ans = max(ans1,max(ans2,ans3)); 
 return ans ; 


}

void adjecentElement(vector<int>&arr,int i , int sum,int &maxi){
    if(i>=arr.size()){
        //maxi update: 
        maxi = max(sum,maxi); 
        return; 

    }


    adjecentElement(arr,i+2,sum+arr[i],maxi); 
    adjecentElement(arr,i+1,sum,maxi); 

    
}


int main(){
 vector<int>arr{2,1,4,9}; 
 int sum =0; 
 int maxi  = INT_MIN; 
 int i =0; 
  

 adjecentElement(arr,i,sum,maxi); 


 cout<<maxi<<endl; 



    return 0; 

}