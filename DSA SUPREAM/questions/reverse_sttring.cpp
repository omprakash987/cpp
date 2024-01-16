#include<iostream>
#include<vector>
using namespace std ;

  void reverseString(vector<string>& s) {
        int start =0; 
        int e =s.size()-1; 

        while(start<=e){
            swap(s[start],s[e]); 
            start++; 
            e--; 


        }
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" "; 

    }

}

// by recursion: 

void  reverseString1(vector<string>&s,int start,int e){
        if(start>=e){
           return; 
        }

        // ek case : 
        swap(s[start],s[e]); 
       reverseString1(s,start+1,e-1); 
       



}

int main(){

vector<string>s{"a","b","c","d"}; 
  int start =0; 
  int e =s.size()-1; 

 reverseString1(s,start,e);

 for(int i =0;i<s.size();i++){
    cout<<s[i]<<" "; 
    
 }

    return 0; 
}