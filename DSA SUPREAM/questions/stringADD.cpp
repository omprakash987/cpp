// #include<iostream>
// using namespace std; 

// string addRE(string num1,int p1,string num2,int p2, int &carry){
//     // base case: 
//     if(p1<0 && p2<0){
//         if(carry != 0){
//             return string(1,carry+'0'); 


//         }
//         return ""; 


//     }


//     // ek case: 
//     string ans = ""; 
//   int n1 = (p1>=0 ? num1[p1] :'0') -'0'; 
//   int n2 = (p2>=0 ? num2[p2] :'0') -'0'; 
// int sum = (n1+n2+carry); 
// int digit = sum%10; 
// carry = sum/10; 
//  ans.push_back(digit+'0'); 
  



// ans += addRE(num1,p1-1,num2,p2-1,carry); 
// return ans; 



// }


// int main(){

// string num1;
// cout<<"enter the value of num1: "<<endl; 

// cin>>num1; 
// string num2; 
// cout<<"enter the value of num2: "<<endl; 
// cin>>num2; 
// int carry =0 ; 


// string  ans = addRE(num1,num1.size()-1,num2,num2.size(),carry); 

//     if (carry != 0) {
//         ans.push_back(carry + '0');
//     }

//     cout << ans << " "; 


//     return 0; 

// }



#include <iostream>
using namespace std;

string addRE(string num1, int p1, string num2, int p2, int &carry) {
    // base case:
    if (p1 < 0 && p2 < 0) {
        if (carry != 0) {
            return string(1, carry + '0');
        }
        return "";
    }

    // recursive case:
    int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
    int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
    int sum = n1 + n2 + carry;
    int digit = sum % 10;
    carry = sum / 10;

    string ans = addRE(num1, p1 - 1, num2, p2 - 1, carry);
    ans.push_back(digit + '0');

    return ans;
}

int main() {
    string num1;
    cout << "enter the value of num1: " << endl;
    cin >> num1;

    string num2;
    cout << "enter the value of num2: " << endl;
    cin >> num2;

    int carry = 0;
    string ans = addRE(num1, num1.size() - 1, num2, num2.size() - 1, carry);

    if (carry != 0) {
        ans.push_back(carry + '0');
    }

    cout << ans << " ";

    return 0;
}
