#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

string removeduplicate(string s){
    string ans="";
    int i=0;
    while(i<s.length()){
        if(ans.length()>0){
            if(ans[ans.length()-1]==s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        else{
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;



}



string removeoccurences(string s, string part){

int pos = s.find(part);
while(pos!=string::npos){
    s.erase(pos,part.length());
    pos=s.find(part);
}
return s;

}


int findmindifference(vector<string>&timepoints){
    // convert time string into minute  string
    vector<int>minutes;
    for(int i=0;i<timepoints.size();i++){
        string curr =timepoints[i];
        int hour = stoi(curr.substr(0,2));
        int min = stoi (curr.substr(3,2));
        int totalminutes = hour*60+min;
        minutes.push_back(totalminutes);

    }
    // step 2: sort

    sort(minutes.begin(),minutes.end());
    // step 3: 
    int mini = INT_MAX;
    int n =minutes.size();
    for(int i=0;i<n-1;i++){
        int diff = minutes[i+1]-minutes[i];
        mini = min(mini,diff);

    }
    // last condition 
    int lastdiff = (minutes[0]+1440)-minutes[n-1];
    mini= min(mini,lastdiff);
    return mini;
}






int main(){

// removal of all duplicate 

// string s = "azxxzy";
// cout<<"The final ans is : "<<removeduplicate(s);
    
//     return 0 ;


// string s="daabcbaabcbc";
// string part = "abc";
// cout<<"The final string is ; "<<removeoccurences(s,part);



vector<string>timePoints={"23:59""10:00"};
cout<<"the final ans is : "<<findmindifference(timePoints);

}