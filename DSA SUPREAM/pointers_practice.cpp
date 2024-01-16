#include<iostream>
using namespace std;
int main(){


    // float f=10.5;
    // float p = 2.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr= p ;
    // cout<<*ptr<<" "<<f<<" "<<p;

    //   int  a= 7 ; 
    //   int b = 17 ;
    //    int *c = &b;
    //    *c = 7;
    //    cout<<a <<" "<<b<<endl;


    // int *ptr = 0 ;
    // int a =10 ;
    // *ptr = a; 
    // cout<<"hello world"<<endl;
    // cout<<*ptr<<endl;



    // char ch = 'a';
    // char * ptr = &ch;
    // ch++;
    // cout<<*ptr<<endl;

    // int a = 7 ;
    // int *c = &a ; 
    // c = c+1;
    // cout<<a <<" "<<*c<<endl;

    // int a = 7 ;
    // int *c = & a ;
    // c = c+ 3;
    // cout<<c<<endl;
    //  cout<<*c<<endl;

    // double a = 10.54;
    // double * d = & a ;
    // d= d+1;
    // cout<<d<<endl;

    // int a[5];
    // int *c ; 
    // cout<<sizeof(a)<<" "<<sizeof (c);


    // int a[]= {1,2,3,4};
    // cout<<*(a)<<" "<<*(a+1);


    // int a[3]= { 1,2,3};
    // cout<<*(a+2);

    // int a[]= {1,2,3,4};
    // int *p = a++;
    // cout<<*p<<endl;


    // int arr[]= {4,5,6,7};
    // int *p = (arr+1);
    // cout<<*arr + 9 ;
    // return 0;


// char b[]="xyz";
// char *c = &b[0];
// cout<<c<<endl;


// char s[] = "ello";
// char *p = s;
// cout<<s[0]<<" "<<p[0];

// char arr[20];
// int i;
// for(i=0;i<10;i++){
//     *(arr+i)=65+i;
// }
// *(arr+i)='\0';
// cout<<arr;
//return 0 ;


// char * ptr;
// char str[]="abcdefg";
// ptr = str;
// ptr+=5;
// cout<<ptr;
// return 0 ;

float arr[5]= {12.5,10.0,13.5,90.5,0.5};
float *ptr1 = &arr[0];
float *ptr2 = ptr1 + 3;
cout<<ptr2<<" ";
cout<<ptr2- ptr1;
return 0;


}  