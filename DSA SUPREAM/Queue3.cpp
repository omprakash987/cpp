#include<iostream>
#include<stack>
#include<queue>
using namespace std;

// Q1: first non repeating cheracter in a stream 

// int main(){
// string str = "aabc";
// int freq[26]={0};
// queue<char>q;

// string ans = "";

// for(int i=0;i<str.length();i++){
//     char ch = str[i];

//     // increment frequency: 

//     freq[ch-'a']++;

//     // q.push
//     q.push(ch);

//     while (!q.empty())
//     {
//        if(freq[q.front()-'a']>1){
//         q.pop();

//        }
//        else{
//         ans.push_back((q.front()));
//         break;
//        }
//     }
    
//     if(q.empty()){
//         ans.push_back('#');

//     }



// }
// cout<<ans<<" ";
  
//     return 0;
// }




// Q2: gas station : 
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int deficit = 0;
        int balance = 0;
        int start = 0;

        for(int i=0;i<gas.size();i++){

            // yahi par galti hogi: 
            balance += gas[i]-cost[i];

            if(balance<0){
                deficit += balance;
                start = i+1;
                balance = 0;
            }
        }

        if(deficit + balance >= 0){
            return start;
        }
        else{
return -1;
        }
    }

    int main(){

        vector<int >gas{1,2,3,4,5};
        vector<int>cost{3,4,5,1,2};

        cout<<canCompleteCircuit(gas,cost)<<" ";


        

        return 0;
    }