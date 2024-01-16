#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

bool isPossiblesol(vector<int>cooksRank,int nP,int mid){
    int currP=0; 
    for(int i=0;i<cooksRank.size();i++){
        int R = cooksRank[i],j=1; 
        int timetaken =0; 
        while(true){
            if(timetaken+j*R<=mid){
                ++currP;
                timetaken +=j*R;
                ++j;


            }
            else{
                break;
            }
        }
        if(currP>=nP){
            true; 

        }
       
    }
    return false;
}

int minTime(vector<int>cooksRank,int nP){
    int start = 0;
    int highestRank = *max_element(cooksRank.begin(),cooksRank.end());
    int end = highestRank*(nP *(nP+1)/2);
    int ans =-1; 


    while(start<=end){
        int mid = (start+end)/2; 
        if(isPossiblesol(cooksRank,nP,mid)){
            ans = mid; 
            end = mid-1; 

        }
        else{
            start = mid+1; 

        }

    }
    return ans; 

}
int main(){

    int T;
    cout<<"enter the value"<<endl;

    cin>>T; 
    while(T--){
    int nP,nC;
    cin>>nP>>nC;
    vector<int>cooksRank;
    while(nC--){
        int R; cin>>R;
        cooksRank.push_back(R); 

    }
    cout<<minTime(cooksRank,nP)<<endl;
    }
}