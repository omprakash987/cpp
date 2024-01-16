// #include <iostream>
// #include<limits.h>
// #include<vector>
// #include<algorithm>
// using namespace std;

// // int binarysearch(int arr[], int size, int target)
// // {
// //     int start = 0;
// //     int end = size - 1;
// //     int mid = start+(end-start)/2;
// //     while (start <= end)
// //     {
// //         int element = arr[mid];
// //         if (element == target)
// //         {
// //             return mid;
// //         }
// //         else if (target < element)
// //         {
// //             // search in left ;
// //             end = mid - 1;
// //         }
// //         else{
// //             //search in right ;
// //             start=mid+1;
        
// //         }
// //             mid=start+(end-start)/2;
       
// //     }
// //     // elemenet not found
// //     return -1;
// // }
// // int main()
// // {
// //     // int arr[] = {1, 2, 3, 4, 5, 6, 7};
// //     // int size = 7;
// //     // int target = 0;
// //     // int index0ftarget = binarysearch(arr, size, target);
// //     // if (index0ftarget == -1)
// //     // {
// //     //     cout << "target not found";
// //     // }
// //     // else
// //     // {
// //     //     cout << " target found at " << index0ftarget << endl;
// //     // }
// //     // return 0;


// //     vector<int>v{1,2,3,4,5,6};
// //     int arr[]={1,2,3,4,5,6,7};
// //     int size=7;
    
// //     // if(binary_search(v.begin(),v.end(),6)){
// //     //     cout<<"Found"<<endl;
// //     // }
// //     // else{
// //     //     cout<<"Not found"<<endl;
// //     // }

// //     if(binary_search(arr,arr+size,7)){
// //         cout<<"Found"<<endl;
// //     }
// //     else{
// //         cout<<"Not found"<<endl;
// //     }
// //     return 0;
// // }



// //  Q1. Find the first occurence of an element 


// // int firstocc(vector<int>arr,int target){
// //     int s=0;
// //     int e=arr.size()-1;

// //     int mid =s+(e-s)/2;
// //     int ans=-1;

// //     while(s<=e){
// //         if(arr[mid]==target){
// //             //ans store and then left;
// //             ans=mid;
// //             //left search
// //             e=mid-1;

// //         }
// //         else if (target<arr[mid]){
// //             //left search 
// //             e=mid-1;


// //         }
// //         else if(target>arr[mid]){
// //           // Right search;
// //            s=mid+1;



// //         }
// //         mid=s+(e-s)/2;

// //     }
// //     return ans;
// // }


// // int main(){
// // vector<int>v{1,2,3,4,4,4,4,5,6,7};
// // int target=4 ;
// // int ans=firstocc(v,target);

// // cout<<" ans is : "<<ans<<endl;
// //     return 0;

// // }


// //  Q2. Find the last occurence

// // int findlastocc(vector<int>arr,int target){
// //     int s=0;
// //     int e=arr.size()-1;
// //     int mid=s+(e-s)/2;

// //     int ans=-1;
// //     while(s<=e){
// //         if(arr[mid]==target){
// //             ans=mid;
// //             //right search
// //             s=mid+1;
// //         }
// //         else if(target<arr[mid]){
// //             //right search
// //             e=mid-1;

// //         }
// //         else if (target>arr[mid]){
// //             //left search
// //            s=mid+1;

// //         }
// //         mid=s+(e-s)/2;
// //     }
// //     return ans;
// // }


// // int main(){
// // vector<int >v{1,3,3,3,7,7,7,7,7,7,7,7,7,7,7,7,9,9,9,20};
// // int target=9;
// // int ans =findlastocc(v,target);
// // cout<<"the ans is : "<<ans<<endl;


// //     return 0;

// // }


// // Q3. Find peak element in a mountain array;




// // int binaryfound(vector<int>arr,int target){
// //     int s=0;
// //     int e=arr.size()-1;
// //     int mid=s+(e-s)/2;

// // while(s<=e){

// //     if(arr[mid]==target){
// //         return mid;
// //     }
// //     else if(arr[mid]>target){
// //         e=mid-1;
// //     }
// //     else{
// //         s=mid+1;
// //     }
// //     mid=s+(e-s)/2;
// // }
// // return -1;
// // }
// // int main(){
// //     vector<int>v{1,2,3,4,5,6};
// //     int arr[]={1,2,3,4,5,6,7};
// //     int size=7;
// //     int target=6;
//     // int foundkey=binaryfound(v,target);
//     // if(foundkey==-1){
//     //     cout<<"Not found";
//     // }
//     // else{
//     //     cout<<"found at index : "<<foundkey;
//     // }
//     // return 0;
//     // if(binary_search(v.begin(),v.end(),3)){
//     //     cout<<"found:"<<endl;
//     // }
//     // else{
//     //     cout<<"Not found";
//     // }
    
//     // if(binary_search(arr,arr+size,50)){
//     //     cout<<"found";
//     // }
//     // else{
//     //     cout<<" not found";
//     // }
    
//     // if(binary_search(v.begin(),v.end(),6)){
//     //     cout<<"Found"<<endl;
//     // }
//     // else{
//     //     cout<<"Not found"<<endl;
//     // }
// //}


// //find the first occurence of the element

// // int foundfirstocc(vector<int>arr,int target){
// //     int s=0;
// //     int e=arr.size()-1;
// //     int mid=s+(e-s)/2;
// //     int ans=-1;
// //     while(s<=e){

    
// //     if(arr[mid]==target){
// //         ans=mid;
// //         e=mid-1;
// //     }
// //     else if(target<arr[mid]){
// //         e=mid-1;
// //     }
// //     else if(target>arr[mid]){
// //         s=mid+1;
// //     }
// //     mid=s+(e-s)/2;
// //     //return ans;
   
// //     }
// // return ans;
// // }
// // int main(){
// //     vector<int>v{1,2,2,3,4,4,4,4,5,6,7};
// //     int target=4;
// //     int ans=foundfirstocc(v,target);
// //     cout<<"the ans is "<<ans;
    
// //         return 0;
// // }








// // find the last occurence

// // int findlastocc(vector<int>arr,int target){
// //     int s=0;
// //     int e=arr.size()-1;
// //     int mid=s+(e-s)/2;
// //     int ans=-1;

// //     while(s<=e){
// //         if(arr[mid]==target){
// //             ans=mid;
// //             s=mid+1;
// //         }
// //         else if(target<arr[mid]){
// //             e=mid-1;

// //         }
// //         else if(target>arr[mid]){
// //             s=mid+1;
// //         }
// //         //update mid;
// //         mid=s+(e-s)/2;
// //     }
// //     return ans;

// //     }


// // int main(){
// // vector<int>v{1,2,3,4,4,4,4,5,6};
// // int target=4;
// // int ans=findlastocc(v,target);
// // cout<<"the ans is : "<<ans;



// //     return 0;

// // }


// //peak mounted element
// // int findpeak(vector<int>arr){
// //     int s=0;
// //     int e=arr.size()-1;
// //     int mid=s+(e-s)/2;
// //     while(s<e){
// //         if(arr[mid]<arr[mid+1]){
// //             s=mid+1;
// //         }
// //         else{
// //             e=arr[mid];
// //         }
// //         //update mid;
// //         mid=s+(e-s)/2;
// //     }
// //     return s;
// // }


// // int main(){
// //     vector<int>v{1,2,3,4,5,20,15,14,13,12,11,10,9};
   
// // //   cout<<findpeak(v)<<endl;
// // // }


// // int findpair(vector<int>&arr,int k){
// //     sort(arr.begin(),arr.end());
// //     set<pair<int,int>>ans;
// //     int i=0;
// //     int j=1;
// //     while(j<arr.size()){
// // int diff=arr[i]-arr[j];
// // if(diff==k){
// //     cout<<arr[i]<<" "<<arr[j]<<endl;
// //     ans.insert({arr[i],arr[j]});
// //     i++;
// //     j++;
// // }
// // else if(diff>k){
// //     i++;

// // }
// // else{
// //     j++;
// // }
// // if(i==j){
// //     j++;
// // }
// // return ans.size();
// //     }

// // }

// // int main(){
// // vector<int>arr{3,1,4,1,5};
// // int k=2;
// // cout<<findpair(arr,k);

// //     return 0;
// // }







// // exponential search 😎😎😎



// // int bs(int a[],int start,int end,int x){
// //     while(start<=end){
// //         int mid=(start+end)/2;
// //         if(a[mid]==x){
// //             return mid;
// //         }
// //         else if(x>a[mid]){
// //             start=mid+1;

// //         }
// //         else{
// //             end=mid-1;
// //         }
// //     }
// //     return -1;
// // }




// // int expsearch(int a[],int n,int x){
// //     if(a[0]==x)
// //     return 0;

// //     int i=1;
// //     while(i<n && a[i]<=x){
// //         i=i*2;

// //     }
// //     return bs(a,i/2,min(i,n-1),x);
// // }




// // int main(){

// // int a[]={3,4,5,6,11,13,14,15,56,70};
// // int n=sizeof(a)/sizeof(int);
// // int x=13;
// // int ans=expsearch(a,n,x);
// // cout<<a[ans]<<endl;
// //     return 0;
// // }



// //EKO SPOJ ❤️❤️


// bool isPossible(vector<long long int >trees,long long int m,long long int mid){
//     long long int woodcollected=0;
//     for(int i=0;i<trees.size();i++){
//         if(trees[i]>mid){
//             woodcollected+=trees[i]-mid;
//         }
//     }
//     return woodcollected>=m;
// }




//  long long int maxsawheight(vector<long long int>trees,long long int m){
//     long long int start=0,end,ans=-1;
//     end=*max_element(trees.begin(),trees.end());

//     while(start<=end){
//         long long int mid =start+(end-start)/2;
//         if(isPossible(trees,m,mid)){
//            ans=mid;
//             start=mid+1;
//         }
//         else{
//             end=mid-1;

//         }
        
//     }
//     return ans;
//  }



// int main(){

// long long int n,m;
// cin>>n>>m;
// vector<long long int>trees;
// while(n--){
//     long long int height;
//     cin>>height;
//     cin>>height;
//     trees.push_back(height);



// }
// cout<<maxsawheight(trees,m)<<endl;

//     return 0;
// }


#include<iostream>
using namespace std; 


int binarysearch(int arr[],int size,int target){
    int s =0; 
    int e=size-1; 
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;

    }
    return -1;
}


int main(){

int arr[]={2,4,6,8,12,14,16}; 
int size=7; 
int target =6; 

int indexofTarget = binarysearch(arr,size,target);
if(indexofTarget==-1){
    cout<<"target not found"<<endl;
}
else{
    cout<<"kya hua tha bhai pehle kaam kyu nahi kar rah tah ? : "<<indexofTarget<<endl;
}



    return 0;
}
