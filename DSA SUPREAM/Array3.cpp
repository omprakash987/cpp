#include<iostream>
#include<vector>
#include<limits.h>
#include<cstring>

using namespace std;

// int transpose(int arr[][3],int row ,int col,int transposearr){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//         //  swap(arr[i][j],arr[j][i]);
// transposearr [j][i]=arr[i][j];

//         }

//     }
// }

// void printarray(int arr[][3],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//              }
//               cout<<endl;
//     }

// }

// int findmaxi(int arr[][3],int row,int col){
//     int maxi=INT_MIN;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]>maxi){
//                 maxi=arr[i][j];

//             }
//         }
//     }
//     return maxi;
// }
// bool findkey(int arr[][3],int row,int col,int key){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]==key){
//                 return true;
//             }
//         }
//     }
// }

// void printcolwisesum(int arr[][3],int row,int col){
//     //sum row wise
//     for(int i=0;i<row;i++){
//         int sum=0;
//         for(int j=0;j<col;j++){
//             sum=sum+arr[j][i];
//         }
//         cout<<sum<<endl;
//     }
// }

// void printrowwisesum(int arr[][3],int row,int col){
//     //sum row wise
//     for(int i=0;i<row;i++){
//         int sum=0;
//         for(int j=0;j<col;j++){
//             sum=sum+arr[j][i];
//         }
//         cout<<sum<<endl;
//     }
// }
// int main(){

//     ///Initialise

// //Taking input

// int brr[3][3]={
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}
// };

// //Print row wise

// for(int i=0;i<3;i++){

//     /// 'we need to print value in each coloum
//     for(int j=0;j<3;j++){
//         cout<<brr[i][j]<<" ";
//     }
//     cout<<endl;
// }

//  for(int i=0;i<3;i++){

//     /// 'we need to print value in each coloum
//     for(int j=0;j<3;j++){
//         cout<<brr[j][i]<<" ";
//     }
//     cout<<endl;
// }

// cout<<"The maximum no is :"<<findmaxi(arr,row,col);
// printrowwisesum(arr,row,col);
// printcolwisesum(arr,row,col);

// Printing col wise
//  int arr[4][3];
//  int row =4;
//  int col=3;
//  for(int i=0;i<row;i++){
//      for(int j=0;j<col;j++){
//          cin>>arr[j][i];
//      }
//  }
//  cout<<"printing";
//  for(int i=0;i<row;i++){
//      for(int j=0;j<col;j++){
//          cout<<arr[i][j]<<" ";
//      }
//      cout<<endl;

// }

// if(findkey){
//     cout<<"true";
// }
// else{
//     cout<<"false";
// }

// vector<vector<int> >arr;
// vector<int>a{1,2,3};
// vector<int >b{4,5,5};
// vector<int >c{7,8,8,4,9};
// arr.push_back(a);
// arr.push_back(b);
// arr.push_back(c);

// for(int i=0;i<arr.size();i++){
//     for(int j=0;j<arr[i].size();j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// vector<vector<int>>arr(5,vector<int >(5,-8));
// cout<<arr[2][3];
// return 0;
// }
// Row sum problem

/// Row sum problem;

// void printrowsum(int arr[][3],int row,int col){
//     for(int i=0;i<row;i++){
//         int sum=0;
//         for(int j=0;j<col;j++){
//             sum=sum+arr[i][j];

//         }
//          cout<<" The sum of row "<< i << " is : "<<sum<<" ";
//  cout<<endl;

//     }

// }

// int main(){

// int arr[3][3]={
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}
// };
// int row=3;
// int col=3;
// printrowsum(arr,row,col);

//     return 0;
// }

// linear search in 2D array ;

// bool findkey(int arr[][3],int row,int col,int key){
// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         if(arr[i][j]==key){
//            return true;

//         }

//     }

// }
// return false;

// }

// int main(){
// int arr[3][3]={
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}
// };
// int row;
// int col;
// int key;
// cout<<"Enter the value of key"<<endl;
// cin>>key;

// if(findkey(arr,row,col, key)){
// cout<<"found"<<endl;
// }
// else{cout<<"not found";
// }

// return 0;
// }

// Max and min ;

// int findmax(int arr[n][m])
// {
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < m; j++)
//         {
//             if (arr[i][j] > maxi)
//             {
//                 maxi = arr[i][j];
//             }
//         }
//     }
//     return maxi;
// }
// int main()
// {

//     int arr[n][m] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}};
    

   
//     cout << "The sum of maximum no is : " << findmax(arr);

//     return 0;
// }




int findMax(int mat[N][M])
{
 
    // Initializing max element as INT_MIN
    int maxElement = INT_MIN;
 
    // checking each element of matrix
    // if it is greater than maxElement,
    // update maxElement
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (mat[i][j] > maxElement) {
                maxElement = mat[i][j];
            }
        }
    }
 
    // finally return maxElement
    return maxElement;
}
 
// Driver code
int main()
{
 
    // matrix
    int mat[N][M] = { { 1, 2, 3, 4 },
                      { 25, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
                      int N;
                      int M;
 
    cout << findMax(mat) << endl;
 
    return 0;
}