#include<iostream>
using namespace std ;


int findsquareroot(int n){
    int target = n; 
    int s =0; 
    int e =n; 
    int mid = s+(e-s)/2; 
    int ans =-1;


    while(s<=e){
        if(mid *mid == target){
            return mid; 

        }

        if(mid*mid >target){
            e = mid-1; 

        }
        else{
            ans = mid;
            s = mid+1; 

        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){

int n ; 
cout<<"enter the value of n: "<<endl;
cin>>n;

int ans = findsquareroot(n);
cout<<ans<<endl;

int precision; 
cout<<"enter the presesion "<<endl; 
cin>>precision;

double finalAns = ans; 
double steps = 0.1; 



for(int i=0;i<precision;i++){
    for(double j=0;j*j<=n;j=j+steps){
        finalAns = j; 

    }
    steps = steps/10; 


}
cout<<"final ans is :"<<finalAns;





    return 0; 

}

