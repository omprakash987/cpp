#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

bool isPossiblesol(vector<long long int >trees,long long int  m,long long int  mid){
    long long int woodcollected =0; 
    for(int i =0;i<trees.size();i++){
        if(trees[i]>mid){
            woodcollected += trees[i]-mid; 

        }
    }
    return woodcollected>=m;
}


long long int max(vector<long long int>trees,long long int m){
    long long int start =0; 
    long long int end = *max_element(trees.begin(),trees.end()); 
    int ans =-1; 

    while(start<=end){
        long long mid = start + (end-start)/2; 
        if(isPossiblesol(trees,m,mid)){
            ans = mid; 
            start = mid +1; 

        }
        else{
            end = mid-1; 

        }
    }
    return ans; 
}

int main(){
    cout<<"enter the value of m and n"<<endl;

long long int n, m; 
cin>>n>>m;
vector<long long int>trees;
while(n--){
    long long int height; 
    cin>>height; 
    trees.push_back(height); 

}
cout<<max(trees,m)<<endl;

    return 0; 
}