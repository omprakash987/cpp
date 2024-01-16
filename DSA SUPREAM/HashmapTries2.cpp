#include<iostream>
using namespace std; 

class TrieNode{
    public: 
    char data; 
    TrieNode* children[26]; 
    bool isTerminal; 

    TrieNode(char d){
        this->data = d; 

        for(int i=0;i<26;i++){
            children[i]=NULL; 

        }
       
        this ->isTerminal = false; 

    }
}; 


void insertWord(TrieNode*root,string word){
    // base case: 
    if(word.length()==0){
       root-> isTerminal = true; 
        return; 

    }

    char ch = word[0];
    int index = ch-'a';
    TrieNode*child ;
    if(root->children[index]!=NULL){
      child = root->children[index];


    }
    else{
        child = new TrieNode(ch);
        root->children[index]=child; 


    }
    insertWord(child,word.substr(1));

}

//     insertword(child,word.subset(1));

// }

// void insertWord(TrieNode*root,string word){
//     // cout<<"inserting "<<word<<endl;
// // cout<<word<<endl;
//     // base case : 
//     if(word.length()==0){
//          root->isTerminal = true; 
//          return;

//     }

//      char ch = word[0];
//     int index = ch-'a';
//     TrieNode*child; 
//     // present: 
//     if(root->children[index]!=NULL){
// child = root->children[index];

//     }
//     else{
//         child= new TrieNode(ch);
//         root->children[index]=child;

//     }

//     // recurdion ; 
//     insertWord(child,word.substr(1));


// }


bool searchWord(TrieNode*root,string word){
    // base case : 
    if(word.length()== 0){
       return root->isTerminal; 
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child; 

    // present: 
    if(root->children[index] != NULL){
        child = root->children[index];

    }
    else{
        // not present: 
        
       return false; 


    }

    // recursion call : 
    return searchWord(child,word.substr(1));

}

int main(){

  TrieNode*root = new TrieNode('-');

// root->insertWord("coding");

insertWord(root,"coding");
insertWord(root,"codehelp");
insertWord(root,"coder");
insertWord(root,"codehelper");
insertWord(root,"baba");
insertWord(root,"baby");
insertWord(root,"babu");
insertWord(root,"kanu");
 
if(searchWord(root,"baby")){
    cout<<"present"<<endl;
}

else{
    cout<<"absent"<<endl;
}

 return 0; 
}