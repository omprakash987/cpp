#include<iostream>
using namespace std;


// adding of two numbers
    
// int add(int a,int b);
// int add(int a,int b){

//    return (a+b) ;
// }
// int main(){
//     int a,b;
   
//     cout<<"enter the value of a\n";


//     cin>>a;
//     cout<<"enter the value of b\n";
//     cin>>b;
  
// cout <<"the sum of a and b is :"<<add(a,b)<<endl;

//    return 0;
// }


    
//Find max of 3;

// void findmax(int a,int b,int c);
// int main(){
// int a,b,c;
// cin>>a;
// cin>>b;
// cin>>c;
// findmax(a,b,c);

//     return 0;
// }

// void findmax(int a, int b, int c){
// if(a>b&&a>c){
//     cout<<"a is maximum";
// }
// else if (b>a&&b>c){
//     cout<<"b is maximum";
// }
// else if(c>a&&c>b){
//     cout<<"c is maximum";
// }
// else {
//     cout<<"both are equal";
// }

// }



//Counting from 1 to n'

// void printcounting(int n);
// int main(){
//     int n;
//     cin>>n;
//     printcounting(n);

//     return 0;
// }
// void printcounting(int n){
//     for(int i=0;i<n ;i++){
//         cout<<i<<endl;
//     }
// }



// Write a function of student & Grade problem
// char getgrade(int marks );

// int main(){
// // int marks;
// // cin>>marks;
// for(int i=0;i<=100;i++){
//     char ans =getgrade(i);
//     cout<<"grade for marks = "<<i<<ans<<endl;
//     }

//     return 0;
// }

// char getgrade(int marks){

//    switch(marks/10){
// case 10:
// case 9: return 'A';break;
// case 8: return 'B';break;
// case 7: return 'C';break;
// case 6: return 'D';break;
// case 5: return 'E';break;
// case 4: return 'F';break;
// default : return 'g';




//    }
// }



// Sum of even number

// int sum_even(int n);
// int main (){

// int n;
// cin>>n;
// cout<<"the sum of even no is "<<sum_even(n)<<endl;

//     return 0;

// }
// int sum_even(int n){
//      int sum =0;
// for(int i=2;i<=n;i=i+2){
   
// sum =sum +i;
    
    
   


// }
//  return sum;

// }


//Home work questions


// 1. Printing the area of circle

// float area(int r);
// int main(){
//     int r;
//     cin>>r;

// cout <<"the area of circle is :"<<area(r);

//     return 0;

// }
// float area(int r){
// float circlearea=3.14*(r*r);
// return circlearea;

// }

// 2. Find number is even;

// int even_odd(int n);
// int main(){
// int n ;
// cin>>n;
// cout<<"the number is :"<<even_odd(n);
//     return 0;
// }
// int even_odd(int n){
// if(n%2==0){
//     return 0;

// }
// else{
//     return 1 ;
// }

// }

//3. fectorial of a number 
// void prime(int n);
// int main(){
// int n ;
// cin>>n;
// prime(n);

//     return 0;
// }

// void prime(int n){

// for (int i=2;i<=n/2;i++){
//     if (n%i==0){
//         cout<<"NOT  a prime";
//     break;
//     }
//     else{
//         cout<<" prime no";
//     }
// }

    
// }

// Print all the no from 1  to n 

// void printno(int n);
// int main(){
// int n;
// cin>>n;
// printno(n);

//     return 0;

// }

// void printno(int n){
// for (int i=1;i<=n;i++){
//  cout <<i<<endl;
// }

// }

//convert celcius to feranite 

// 


//
// Fectorial of a number

// int fect(int n);
// int main(){
//     int  n;
//     cin>>n;


//  cout<<"fectorial is :"<<fect(n);
//     return 0;
// }
// int fect(int n){
//     int fect=1;
//     for(int i=1;i<=n;i++){
//        fect=fect*i;
       
//     }
//      return fect;
// }



//printing prime no

// bool primeno(int n);
// int main(){
//     int n;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         bool isprime=primeno(i);
//         if(isprime ){
//             cout<<i<<" ";
//         }
//     }
    


//     return 0;
// }
// bool primeno(int n){
//     int i=2;
//     for(i=2;i<n;i++){
//         if(n&i==0){
//             return false;
           
//         }
       
//     }
//     return true;
// }


// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main() {
//     // Complete the code.
//     int a;
//     float b;
//     char c;
//     double d;
//     long l;
//     scanf("%d %ld %c %f %lf",&a,&l,&c,&b,&d);
//     printf("%d\n%ld\n%c\n%0.3f\n%0.9lf\n",a,l,c,b,d);
//     return 0;
// }

// int checkprime(int n){
//     int i=2;
//     for(i=2;i<n;i++){
//         if(n%i==0){
//             return false;

//         }
//     }
//     return true;

// }
// int main(){
//     int n;
//     cin>>n;
   
//    bool isprime=checkprime(n);
// if(isprime){
//     cout<<"prime"<<endl;

// }
// else{
//     cout<<"Not a prime"<<endl;
// }
// return 0;

// }


// int checkprime(int n){
//     int i=2;
//     for(i=2;i<n;i++){
//         if(n%i==0){
//             return false;

//         }
//     }
//     return true;

// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=2;i<n;i++){
//         bool isprime=checkprime(i);
//         if(isprime){
//             cout<<i<<" ";
//         }
//     }
// }
