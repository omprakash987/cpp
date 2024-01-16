#include<iostream>
using namespace std;

// int main(){

//     //printing rectangle 
// int n,m;
// cout<<"enter the value of row "<<endl;
// cin>>n;
// cout<<"enter the value of coloumn "<<endl;

// cin>>m;
// for(int i=1 ;i<n;i++){
//     for(int j=1;j<m;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// return 0;
// }


//printing hollow tringle

// int main(){
// int rowcount;
// int colcount;
// cin>>rowcount;
// cin>>colcount;
// for (int row=0; row<rowcount;row++){
//     if(row==0||row==rowcount-1){
//         for(int col=0;col<colcount;col++){
//             cout<<"* ";
//         }
//     }
//     else{
//         cout<<"* ";
//         for(int i=0;i<colcount-2;i++){
//             cout<<"  ";
//         }
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//     return 0;
// }




// Half piramid

// int main(){
//     int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row-1;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }


//Inverted piramid

// int main(){
// int n;
// cout<<"enter the value of row"<<endl;
// cin>>n;

// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row;col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

//     return 0;
// }



//Numerical half piramid


// int main(){
// int n;

// cout<<"enter the value of n"<<endl;
// cin>>n;
// for(int row =0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout<<col+1;
//     }
//     cout<<endl;
// }

//     return 0;
// }



//Inverted numerical half piramid


// int main(){
// int n;
// cout<<"enter the value of n"<<endl;
// cin>>n;
// for(int row =0;row<n;row++){
//     for(int col=0;col<n-row;col++){
//         cout<<col+1;    
//         }
//         cout<<endl;
// }

//     return 0;
// }




//Printing full piramid

// int main(){
// int n ;
// cout <<"enter the value of n"<<endl;
// cin>>n;
// for (int row =0;row<n;row++){
//     for (int col=0;col<row-n-1;col++){
//         cout<<" ";}

    
//     for(int col=0;col<row+1;col++){
//         cout<<"*";
//     }
    
//     cout<<endl;

// }



//     return 0;
// }



// int main(){
// int a=10,b,c;
// b=a++;c=a;
// cout<<a<<" "<<b<<" "<<c<<" "<<endl;

//     return 0;
// }


// int main(){
// int n,m;
// cin>>n;
// cin>>m;
// for(int row=0;row<n;row++){
//     for(int col=0;col<m;col++){
//         if(row==0||row==(n-1)||col==0||col==m-1){
//             cout<<"* ";
//         }
//         else{cout<<"  ";}
        
//     }
//     cout<<endl;
// }

//     return 0;
// }




//hollow half piramid

// int main(){
// int n;
// cin>>n;
// for(int row =0;row <n;row ++){
//     for (int col=0;col<n;col++)
    
//     {
//         if(row ==0||col==0||col==n - 1 - row){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
        
//     }
//      cout<<endl;
   
// }

//     return 0;

// }


//full piramid 

// int main(){

// int n;
// cin>>n;
// for (int i =0;i <n;i++){
//     int k=0;
// for (int j=0;j<(2*n)-1;j++){
//     if(j<n-i-1){
//         cout<<"  ";
//     }
//     else if (
//         k<(2*i)+1
//     ){if(k==0||k==2*i||i==n-1)
//         cout<<"* ";
//         else{cout<<"  ";}
//     k++;}

// else{cout<<"  ";}
// }
// cout<<endl;
// }

//     return 0;
// }


// Numarical piramid

// int main(){
// int n;
// cin>>n;
// for (int row =0;row <n; row ++){
//     for (int col =0;col<row +1;col++){
//         cout<<col+1;
//     }
//     cout<<endl;
// }

//     return 0;
// }


//full  piramid


// int main (){
// int n;
// cin>>n;
// for(int row =0;row <n;row ++){
//     for(int col=0;col<n-row -1;col++){
//         cout<<" ";
//     }

//     for (int col =0;col<row +1; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }


//     return 0;
// }

//inverted full piramid 

// int main(){
// int n;
// cin>>n;
// for (int row =0;row <n;row ++){
//     for (int col =0;col<row ;col++){
//         cout<<" ";
//     }
//     for(int col=0;col<n-row ;col++){

//         cout<<"* ";
//     }
//     cout<<endl;
// }
//     return 0;
// }



//solid dimond

// int main(){
//     //full piramid
//     int n;
// cin>>n;
// for(int row =0;row <n;row ++){
//     for(int col=0;col<n-row -1;col++){
//         cout<<" ";
//     }

//     for (int col =0;col<row +1; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// for (int row =0;row <n;row ++){
//     for (int col =0;col<row ;col++){
//         cout<<" ";
//     }
//     for(int col=0;col<n-row ;col++){

//         cout<<"* ";
//     }
//     cout<<endl;

// }

//     return 0;
// }



//Hollow Diomond ;

// int main(){
//     int n;
//     cin>>n;
//     for(int row =0;row <n;row ++){
//         for(int col=0;col<n-row -1;col++){
//             cout<<" ";
//         }
//         for(int col=0;col<(2*row )+1;col++){
// if(col==0||col==2*row){
//     cout<<"*";
// }
// else{
//     cout<<" ";
// }
//         }
//         cout<<endl;
//     }

//     for (int row =0 ; row<n ; row ++ ){
//         for(int col=0;col<row;col++){
//             cout<<" ";
//         }
       
//         for(int col=0;col<2*n-2*row-1;col++){
//             if(col==0||col==2*n-2*row-2){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }


//     return 0;
// }


// printing intresting pattern
// int main (){
// int n ;
// cin >>n;
// for(int row =0;row <n ;row ++){
//     for(int col=0;col<n-row;col++){
//         cout<<"*";
//     }
   
    



//     for(int col=0;col<2*row +1;col++){
//         cout<<" ";
//     }
   


//     for(int col=0;col<n-row;col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for(int row =0;row<n;row ++){
//     for(int col=0;col<row +1;col++){
//         cout<<"*";
//     }



// for(int col=0;col<2*n-2*row -1;col++){
//     cout <<" ";
// }


// for(int col=0;col<row +1;col++){
//         cout<<"*";
//     }
//     cout<<endl;

// }


//     return 0;
// }


// int main(){
// int n;
// cin>>n;
// for (int row =0;row <n;row++){
//     for (int col =0;col<row +1; col++){
       
//         cout<<row+1;
//         if(col!=row){
//             cout<<"*";
//         }
//     }
//     cout <<endl;
// }
// for(int row =0;row <n;row ++){
//     for (int col=0;col<n-row;col ++){
//         cout<<n-row;
//         if(col!=n-row-1){
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }

//     return 0;
//}


// int main(){
// int n ;
// cin >>n;
// for(int row=0;row<n;row ++){
//     int col;
//     for( col=0;col<row+1;col++){
//         int ans =col+1;
//         char ch=ans+'A'-1;

//    cout<<ch;}
    
//     col=col-1;
//     for(;col>=1;col--){
//         int ans=col;
//         char ch=ans+'A'-1;
//         cout<<ch;
//     }
//     cout<<endl;
// }

//     return 0;
// }


// int main(){
// int n ;
// cin>>n;
// for(int row =0;row<n;row++){
//     //row+1 elements print karne wale hai
//     int start=row+1;
//     for (int col=0;col<row+1;col++){
//         cout<<start;
//         start+=;
//     }
//     cout<<endl;
// }

//     return 0;
// }


// int main(){
// int n;
// cin>>n;
// for(int row =0; row<n ;row ++){
//     for (int col=0;col<n-row-1; col++){
//         cout<<" ";
        
//     }
  


 
//     for(int col=0;col<row+1;col++){
//         cout<<row+col+1;
     
//     }
//     int start=2*row;
//     for(int col=0;col<row;col++){
//         cout<<start;
//         start--;

//     }
//     cout<<endl;
// }

//     return 0;



// }


// int main(){
// int n;
// cin>>n;

// // /spaces
// for(int row =0;row<n;row++){
//     for (int col=0;col<n-row-1;col++ ){
//         cout<<" ";
//          }

//     //Numbers
//     int start=1;
//     for(int col=0;col<2*row+1;col++){
//         // first row or last row
//         if(row==0||row ==n-1){
//             if(col%2==0){
//                 cout<<start;
//                 start++;

                 
//             }
//             else{//odd
//                 cout<<" ";}
//         }
//         else{
//             //First row 
//             if(col==0){
//                 cout<<1;
//             }
//             else if(col==2*row){
//                 cout<<row+1;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//     }
//     cout<<endl;
// }


//     return 0;
// }


//Numeric hollow half piramid

// int main(){
// int n;
// cin>>n;
// for (int row  =0; row<n ;row++){

// for(int col=0;col<row +1;col++){
//     if(col==0||col==row||row==n-1){
//     cout<<col+1;
//     }
//     else{
//         cout<<" ";
//     }
// }
// cout<<endl;
// }

//     return 0 ;

// }


//numeric hollow inverted half piramid
// int main(){
//     int n;
//     cin>>n;
//     for (int row =0;row <n;row++){
//         for(int col=row +1;col<=n;col++){
//             if( col==row +1||col==n ||row ==0){
//             cout<<col;}
//             else{cout<<" ";}
//         }
//         cout<<endl;
       
//     }


//     return 0;
// } 

//Numeric palendrom equilateral triangle

int main(){
int n;
cin>>n;
for(int row =0;row <n; row ++){
    for (int col=0;col<row-1;col++){
        cout<<" ";
    }
     for(int col=0;col<row+1;col++){
    cout<<col+1;
    }
    cout<<endl;
}

    return 0;
}