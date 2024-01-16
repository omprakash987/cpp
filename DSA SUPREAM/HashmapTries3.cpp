#include<iostream>
#include<vector>

using namespace std;

vector<vector<string>>getSuggestions(){

    // variable: 
    trieNode*prev = root; 
    vector<vector<string>>output; 


for(int i=0;i<input.length();i++){
    char lastch = input[i];

int index = lastch-'a';
TrieNode*curr = prev->childern[index];

if(curr == NULL){
    break; 

}
else{    
    // store all suggestion: 

    vector<string>temp; 
    storeSuggstion(curr,temp);
     

}
}


}

int main(){

vector<string>v; 
v.push_back("love");
v.push_back("lover");
v.push_back("loving");
v.push_back("last");
v.push_back("lost");
v.push_back("lane");
v.push_back("lord");

string input = "lovi";
TrieNode* root = new TrieNode('-');
for(int i=0;i<v.size();i++){
    insertWord(root,v[i]);

}
vector<vector<string>>ans = getSuggestions(root,input);
cout<<"printion the answer: "<<endl;
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<",";

    }
    cout<<endl;
    
}

    return 0; 
}