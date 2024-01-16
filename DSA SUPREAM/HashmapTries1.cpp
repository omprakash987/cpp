#include<iostream>
#include<unordered_map>

using namespace std ;


// bool circular(int Node*head){
//     unordered_map<node*,bool>vis; 
//     Node*temp = head; 

//     while (temp!=NULL)
//     {
//         if(vis.find(temp)!= vis.end()){
//             vis[temp] = true;
//         }
//         else{
//             return true; 
//         }
//         temp = temp->next; 

//     }
//     return false; 
    

// }


int main(){
   

// // creation  ;
// unordered_map<string,int>m; 
// creation: 
// unordered_map<string,int>m; 


// // insertion
// pair<string,int>p = make_pair("Scorpio",9);
// pair<string,int>p = make_pair("scorpio",9);

// m.insert(p);
// m.insert(p);

// pair<string,int>p2("alto",2);

// m.insert(p2);

m["fortuner"]=10; 


// //access 
// cout<<m.at("alto")<<endl; 
// cout<<m.at("Scorpio")<<endl;
// cout<<m["fortuner"]<<endl;
// cout<<m["fortuner"]<<endl;


// //search: 
// cout<<m.count("alto")<<endl;

// if(m.find("fortuner")!=m.end()){
//     cout<<"fortuner found"<<endl;

// }
// else{
//     cout<<"fortuner not found"<<endl; 

// }

// cout<<m.size()<<endl;
// cout<<m["hummer"]<<endl;

// cout<<m.size()<<endl;

// cout<<"printing all entries: "<<endl;

// for(auto i: m){
//     cout<<i.first<<"->"<<i.second
// <<endl;
// }


// cout<<endl;
// for(auto i: m){
//     cout<<i.first<<"->"<<i.second<<endl;
    
// }




// string str = "thiruvananthapuram";
// unordered_map<char,int>freq; 
// for(int i=0;i<str.length(); i++){
//     char ch = str[i];
//     freq[ch]++; 

// }
// for(auto i: freq){
//     cout<<i.first<<" "<<i.second<<endl;
// }




string str = "mississippi"; 
unordered_map<char,int>freq; 
for(int i=0;i<str.length();i++){
    char ch = str[i];
    freq[ch]++; 

}


for(auto i: freq){
    cout<<i.first<<"->"<<i.second<<endl;

}

return 0;
}