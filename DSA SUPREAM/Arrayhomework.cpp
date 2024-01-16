#include<iostream>
#include<vector>
#include<limits.h>
#include<cstring>


using namespace std;
// void waveprintmatrix(vector<vector<int>>v){
//     int m=v.size();
//     int n=v[0].size();
//     for(int startcol=0;startcol<n;startcol++){
//         if((startcol&1)==0){
//             for(int i=0;i<m;i++){
//                 cout<<v[i][startcol]<<" ";          
//                  }
//         }
//         else{
//             for(int i=m-1;i>=0;i--){
//                 cout<<v[i][startcol]<<" ";
//             }
//         }
//     }
// }
// int main(){
//     vector<vector<int>>v{
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},
//         {13,14,15,16},
//         {17,18,19,20}
//     };
//     waveprintmatrix(v);
//     return 0;
// }

// // void moveallnegtoleft(int a[],int size){
// //     int l=0;
// //     int h=size-1;
// //     while(l<=h){
// //         if(a[l]<0){
// //             l++;
// //         }
// //         else if(a[h]>0){
// //             h--;
// //         }
// //         else{
// //             swap(a[l],a[h]);
// //         }
// //     }
// //     for(int i=0;i<size;i++){
// //         cout<<a[i]<<" ";
// //     }

// // }
// // int main(){
// //     int a[]={1,-2,-9,0,-3,4,-5,6};
// //     int size=6;
    

// //    moveallnegtoleft(a,size);
// // }



// //find missing element from an array with duplicate

// // void findmissing(int *a,int n){
// // // visited method 
// // for(int i=0;i<n;i++){
// //     int index=abs(a[i]);
// //     if(a[index-1]>0){
// //         a[index-1]*=-1;
// //     }
// // }
// // for(int i=0;i<n;i++){
// //     cout<<a[i]<<" ";
// // }
// // all positevee index are missing 
// // for(int i=0;i<n;i++){
// //     if(a[i]>0)
// //     cout<<i+1<<" ";
// // }
// // }



// // int main(){
// //     int n;
// //     int a[]={1,3,5,3,4};
// //     n=sizeof(a)/sizeof(int );
// //     findmissing(a,n);
// //     return 0;
// // }

// // int main(){
// //     int a=5;
// //     cout<<(++a)*(++a);
// //     return 0;
    
// // }


// class Solution{
//     public:
//     string calc_Sum(int *a,int n,int *b,int m){
//     int carry=0;
//     string ans ;
//     int i=n-1;
//     int j=m-1;
//     while(i>=0&&j>=0){
//         int x=a[i]+a[j]+carry;
//         int digit=x%10;
//         ans.push_back(digit+'0');
//         carry=x/10;
//         i--,j--;
        
//     }
//       while(i>=0){
//         int x=a[i]+0+carry;
//         int digit=x%10;
//         ans.push_back(digit+'0');
//         carry=x/10;
//         i--;
        
//     }
//     while(j>=0){
//         int x=0+b[j]+carry;
//         int digit=x%10;
//         ans.push_back(digit+'0');
//         carry=x/10;
//         j--;
        
//     }
//     if(carry){
//         ans.push_back(carry+'0');
//     }
//     while(ans[ans.size()-1]=='0'){
//         ans.pop_back();
//     }
//     reverse(ans.begin(),ans.end());
//     return ans;
//     }
// };


int main(){
    cout<<"hello world"
    <<endl;
    cout<<" 3 or 3 hai 33";

}
