#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>

using namespace std ; 

int Kdiffpair(vector<int>nums,int k){
    sort(nums.begin(),nums.end()); 

    int count =0; 
    int i=0;
    int j=1; 


    while(j<nums.size()){
        int diff = nums[j]-nums[i]; 
        if(diff == k){
            count++; 
            i++; 
            j++; 

        }
        else if(diff<k){
            j++;
        }
        else{
            i++; 

        }
        
    }
    return count;
}


int bs(vector<int>nums,int s,int x){
    int e = nums.size(); 
    int mid = (s+e)/2; 

    while(s<e){
        if(nums[mid]==x){
            return mid; 
        }
        else if(nums[mid]>x){
            s = mid+1; 

        }
        else{
            e = mid-1 ; 

        }
    }
    return -1; 

}



int main(){

// vector<int>nums{3,3,3,3};
// for(int i=0;i<nums.size();i++){
//     cin>>nums[i];

// };

// int k=0 ; 

// int ans = Kdiffpair(nums,k);
// cout<<ans<<" ";



// binary search


vector<int>nums{3,1,4,1,5};
int count =0; 
int k =2; 

sort(nums.begin(),nums.end());


for(int i=0;i<nums.size();i++){
    if(bs(nums,i+1,nums[i]+k)!=-1){
        count++; 

    }
   
}
cout<<"the ans is : "<<endl;
cout<<count<<" ";

 return 0; 
};


   
