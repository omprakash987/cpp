#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
// int main(){
// initialise a vector
// create a vector

// vector<int>arr;
// int ans=sizeof(arr)/sizeof(char);
// cout<<ans<<endl;

// cout<<arr.size()<<endl;
// cout<<arr.capacity()<<endl;

// insert

// arr.push_back(5);
// arr.push_back(7);
// //print
// for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<< " ";
// }
// cout<<endl;

// //remove
// arr.pop_back();
// for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<< " ";
// }
// cout<<endl;

// int n;
// cout<<"enter the value of n";
// cin>>n;

// vector<int>brr(n);
// cout<<brr.size()<<endl;
// cout<<brr.capacity()<<endl;

// for(int i=0;i<brr.size();i++){
//     cout<<brr[i]<< " ";
// }
// cout<<endl;

//     return 0;
// }

// Find unique element

// int findunique(vector<int> arr){
//     int ans=0;

//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }

// int main(){
// int n;
// cout<<"enter the size of array"<<endl;
// cin>>n;
// vector<int>arr(n);
// cout<<"enter the elements"<<endl;
// for(int i=0;i<arr.size();i++){
//     cin>>arr[i];
// }
// int uniqueelement=findunique(arr);
// cout<<"unique element is "<<uniqueelement<<endl;

//     return 0;
// }

// union of two array //no duplicate

// int main(){
// int arr[]={1,3,5,7,9};
// int sizeA=5;
// int brr[]={2,4,6,8};
// int sizeB=4;

// vector<int>ans;
// //push all element of vector arr
// for(int i=0;i<sizeA;i++){
//     ans.push_back(arr[i]);

// }
// // priint all element of vector brr
// for(int i=0;i<sizeB;i++){
//     ans.push_back(brr[i]);
// }

// //print ans
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<< " ";
// }

//     return 0;
// }

// Intersection

// int main(){
// vector<int>arr{1,3,3,4,6,8};
// vector<int>brr{3,49,3,10};

// vector<int>ans;

// // output loop arr vector;
// for(int i=0;i<arr.size();i++){
//     int element=arr[i];
//     //for every element .run loop on brr
//     for(int j=0;j<brr.size();j++){
//         if(element==brr[j]){
//             //mark
//           brr[j]=-1;
//             ans.push_back(element);
//         }

//     }
// }
// for(auto value:ans){
//     cout<<value<<" ";
// }

//     return 0;
// }

// Initialise an vector

// int main(){

//     vector<int>arr;
//     int ans=sizeof(arr)/sizeof(int );
//     cout<<ans<<endl;
//     cout<<arr.size()<<endl;
//     cout<<arr.capacity()<<endl;
//     arr.push_back(5);
//     arr.push_back(6);
//      arr.pop_back();
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }

// vector<int >brr(10);
// cout<<brr.size()<<endl;

// }

// find unique element

// int findunique( vector<int>arr){
// int ans=0;

// for(int i=0;i<arr.size();i++){
// ans=ans^arr[i];
// }
// return ans;
// }
// int main(){
//     int n;
//     cout<<"enter the size of array :"<<endl;
//     cin>>n;

//     vector<int >arr(n);
//     cout<<"enter the elements"<<endl;
//     //Taking input
//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }
//     int uniqueElement=findunique(arr);
//     cout<<" unique element is : "<<uniqueElement<<endl;
//     return 0;

// }

// int findunique(vector<int > arr){
//     int ans=0;

//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }

// int main(){
// int n;
// cout<<"enter the size of array"<<endl;
// cin>>n;
// vector<int>arr(n);
// cout<<"enter the elements"<<endl;
// for(int i=0;i<arr.size();i++){
//     cin>>arr[i];
// }
// int uniqueelement=findunique(arr);
// cout<<"unique element is "<<uniqueelement<<endl;

//     return 0;}

// Union of two array

// int main(){
//     // int n;
//     // cin>>n;
//     int arr[]={1,2,3,4,5};
//     int sizea=5;
//     int brr[]={2,4,6,8};
//     int sizeb=4;
//     vector<int>ans;

//     //push all element of vector a and b
//     for(int i=0;i<sizea;i++){
//         ans.push_back(arr[i]);
//     }
//     for(int i=0;i<sizeb;i++){
//         ans.push_back(brr[i]);
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// return 0;
// }

// Intersection of two array

// int main(){

//     vector<int>arr{1,3,3,4,5};
//     vector<int>brr{2,3,3,6};

//     vector<int> ans;
//     for(int i=0;i<arr.size();i++){
//         int element=arr[i];
//         for(int j=0;j<brr.size();j++){
//             if(element==brr[j]){
//                 //mark
//                 brr[j]=INT_MIN;
//             ans.push_back(element);
//             }
//         }

//     }
//     // ans
//    for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
//    }
//     return 0;
// }

// pair sum problem;

// int main(){

//     vector<int>ans{10,10,10,20,30,40,50,60};
//     int sum =80;

//     //print all the pair//Triplet

//     for(int i=0;i<ans.size();i++){
//         int element=ans[i];
//         for(int j=i+1;j<ans.size();j++){
//             for(int k=j+1;k<ans.size();k++){
//                 for(int l=k+1;l<ans.size();l++){

//            if(element+ans[j]+ans[k]+ans[l]==sum){
//             cout<<" pair found"<<element<<","<<ans[j]<<","<<ans[k]<<","<<ans[l]<<endl;
//            }
// //            }

//            }

//         }
//     }
// }

// short 0 ans 1;
//  int main(){
//      vector<int>arr{0,1,0,1,1,0,1,0,1,1};

//     int start =0;
//     int end =arr.size()-1;

//     int i=0;
//     while(i !=end){
//         if(arr[i]==0){
//             swap(arr[start],arr[i]);

//             start++;
//             i++;

//         }
//         else{
//             swap(arr[end],arr[i]);
//             end--;
//         }
//     }
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i];
//     }

// return 0;
// }

// Find the unique element

// int uniqueElement (vector<int>arr){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];

//     }
//     return ans;
// }
// int main(){
// int n;
// cin>>n;
// vector<int >arr(n);
// for(int i=0;i<arr.size();i++){
//     cin>>arr[i];
// }
// cout<<"The unique element is :"<<uniqueElement(arr);
//     return 0;
// }

// Union of two array

// int main(){
//     int arr[]={1,2,3,4,5};
//     int sizea=5;
//     int brr[]={6,7,8,9};
//     int sizeb=4;
//      vector<int>ans;
// for(int i=0;i<sizea;i++){
//     ans.push_back(arr[i]);
// }
// for(int i=0;i<sizeb;i++){
//     ans.push_back(brr[i]);
// }
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }
// }

////Intersection of two array

// int main(){
//  vector<int>arr{1,2,3,4,5};
//  vector<int >brr{2,4,6,5};
//  vector<int >ans;
//  for(int i=0;i<arr.size();i++){
//     for(int j=0;j<brr.size();j++){
//         if(arr[i]==brr[j]){
//              brr[j]=INT_MIN;
//             ans.push_back(arr[i]);
//         }
//     }
//  }
//  for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
//  }

//     return 0;
// }

// Pair sum problem;

// int main(){
//     vector<int >arr{10,20,30,40,50,30};
//     int sum=60;
//     for(int i=0;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){
//             if(arr[i]+arr[j]==sum){
//                 cout<<"pair found"<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
//             }

//         }
//     }
// }

// short one and zero;

// int main()
// {
//     int arr[] = {0, 0, 1, 0, 1, 1, 0};
//     int size = 7;
//     int start = 0;
//     int end = size - 1;
//     int i = 0;
//     while (i != end)
//     {
//         if (arr[i] == 0)
//         {
//             swap(arr[start], arr[i]);
//             i++;
//             start++;
//         }
//         if (arr[i] == 1)
//         {
//             swap(arr[end], arr[i]);
//             end--;
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i];
//     }

//     return 0;
// }


int main(){

int n,k;
cin>>n;
cin>>k;
int mask=1<<k;
int ans=n|mask;
cout<<ans;

    return 0;
}