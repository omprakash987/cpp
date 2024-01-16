#include<iostream>
#include<vector>
using namespace std; 

void moveallnegativeno(vector<int>nums){
    int l =0; 
    int h = nums.size()-1; 
    while(l<h){
        if(nums[l]>=0){
            swap(nums[l],nums[h]); 
            h--; 


        }
        else{
            l++; 

        }
    }

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" "; 

    }
}


int main(){
vector<int>nums{1,-2,3};
moveallnegativeno(nums); 

}