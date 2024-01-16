#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;


string intToRoman(int num) {
        string romanSymbol[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        int value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1}; 

        string ans ="";

    for(int i =0;i<13;i++){
        while(num>=value[i]){
            ans += romanSymbol[i]; 
            num-=value[i]; 

        }
    }

return ans; 


    }

int main(){



    int nums; 
    cout<<"enter the value of nums: "<<endl; 

    cin>>nums; 


    string ans = intToRoman(nums); 
    
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" "; 

    }



}

// int main(){
// string ans = "kanu"; 
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]; 
// }


//     return 0; 
// }