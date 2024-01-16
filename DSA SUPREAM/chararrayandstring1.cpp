#include<iostream>
#include<string.h>
#include<limits.h>
#include<vector>
#include<algorithm>
using namespace std;

    // char name[100];
    // cout<<"entre your name "<<endl;
    // cin>>name;

    // cout<<"apka naam "<<name<<endl;

    // char ch[100];
    // cout<<"enter the name"<<endl;

    // cin>>ch;
    // cout<<"mera naam "<<ch<<"  hai";
    
    // ch[0]='a';
    // ch[1]='b';
    // ch[2]='c';
    // // cout<<ch[2];
    // cout<<ch[3];



    // char arr[100];
    // cin.getline(arr,50);

    // cout<<arr;
//    char ch[50];
//    cin>>ch[3];
//    cin>>ch[49];
//    cin>>ch;
//    cout<<ch;
//    for(int i=0;i<50;i++){
//     if


//    }




//Q find length of char array

int getlength(char name[]){
    int length=0;
    int i=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }
    return length;
}

// int main(){
//     char name[100];
//     cin>>name;
//     cout<<"lenth is "<<getlength(name)<<endl;

//     cout<<"length is : "<<strlen(name);
// }



// Q reverse string
// int main(){
// char ch[100];
// cin>>ch;
// int s=0;
// int e=strlen(ch)-1;
// for(int i=0;i<strlen(ch)/2;i++){
//     swap(ch[s],ch[e]);
//     s++;
//     e--;
// }
// cout<<ch;
// }

// int reversechararray(char name[]){
//     int i=0;
//     int n=getlength(name);
//     int j=n-1;
//     while (i<=j)
//     {
//         swap(name[i],name[j]);
//         i++;
//         j--;
//     }
    
    

    
// }

// int main(){
//     char name[100];
//     cin>>name;
//     cout<<"initially : "<<name<<endl;
//     cout<<"after swaping : "<<reversechararray(name)<<endl;

// }


//Q replace all spaces by "*"
 
void replacespaces(char sentence[]){
    int i=0;
    int n=strlen(sentence);
    for(int i=0;i<n;i++){
        if(sentence[i]==' '){
            sentence[i]='@';
            
        }
        
    }
    cout<<sentence;
}

//Q PALINDROME

bool checkpalindrome(char arr[]){
    int i=0;
    int n=strlen(arr);
    int j=n-1;
    while(i<=j){
        if(arr[i]!=arr[j]){
            return false;}
            else{
            i++;
            j--;
            }
        }
        return true;

    }
    

 //  Q convert the character string in upper/lowercase case

void lowercase(char arr[]){
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]>'a'&&arr[i]<'z'){
        arr[i]=arr[i]-'A'+'a';
        }
    }
}

int main(){
string str;
cin>>str;
cout<<str<<endl;
cout<<"length : "<<str.length()<<endl;
cout<<"is empty"<<str.empty()<<endl;
str.push_back('a');
cout<<str<<endl;
str.pop_back();
cout<<str<<endl;
cout<<str.substr(0,6)<<endl;
string a="omprakash";
string b="parewa";
if(a.compare(b)==0){
    cout<<"a and b are exactly same string"<<endl;
}
else{
    cout<<"a and b are not same "<<endl;
}




// string str;
// cout<<"enter the string"<<endl;
// //input
// getline(cin,str);
// cout<<str;



   
// char arr[100]="omprakash";
// // convertuppercase(arr);
// lowercase(arr);
// cout<<arr<<endl;




    // char arr[100]="hahahhbabchalaoengaah";
    // cout<<"palindrom check : "<<checkpalindrome(arr);



    // char sentence[100];
    // cin.getline(sentence,100);
    
    // replacespaces(sentence);
    



    return 0;
}





  