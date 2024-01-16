#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>


using namespace std; 

vector<int> findfectorial(int n){
    vector<int>ans; 
    ans.push_back(1); 
    int carry = 0; 

    for(int i=2;i<=n;i++){
        for(int j=0;j<ans.size();j++){
            int x = ans[j]*i+carry; 
            ans[j]=x%10; 
            carry=x/10; 


        }
        while(carry){
            ans.push_back(carry%10);
            carry = carry/10; 

        }
        carry =0; 

    }
     reverse(ans.begin(),ans.end());
  return ans;
}

int main(){
    int n=500;

 vector<int>ans = findfectorial(n); 
 for(int i =0;i<ans.size();i++){
    cout<<ans[i];
 }

    return 0; 


}
