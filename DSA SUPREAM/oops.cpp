#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

class Animal{
    private:
    int weight;

    public:
    // state or property

int age;

string type;

// constructor
Animal(){
    this->weight =0;
    this->age = 0;
    this->type = "";
    cout<<"constructor called "<<endl;
}

// parametarise constructor
Animal(int age){
    this->age = age;
    cout<<"parametrised constructor called"<<endl;

}

// copy constructor
Animal(Animal &obj){
    this->age = obj.age;
    this ->weight = obj.weight;
    this->type = obj.type;
    cout<<"i am in copy constructor"<<endl;

}

// Distrocter



// behaviour
void eat(){
cout<<"hello"<<endl;
}

void sleep(){
cout<<"hello ramesh"<<endl;
}

int getweight(){
    return weight;
}

void setweight(int weight){
    // this is a pointer to current object
   this-> weight = weight;
   
}

~Animal(){
    cout<<"i am inside distractor"<<endl;
}

};




 int main(){

// Object creation 

// static
// Animal ramesh;
// ramesh.age=13;
// ramesh.name= "lier";
// cout<<"age of ramesh is : "<<ramesh.age<<endl;
// cout<<"age of ramesh is : "<<ramesh.name<<endl;

// ramesh.eat();
// ramesh.sleep();

// ramesh.setweight(101);
// cout<<"weight "<<ramesh.getweight()<<endl;

// Animal*suresh = new Animal;
// (*suresh).age =15;
// (*suresh).type = "billi";

// alternate dynamic 
// suresh->age = 15;
// suresh->type = "billi";
// cout<<suresh->age<<endl;
// cout<<suresh->type<<endl;

// suresh->eat();
// suresh->sleep();

// Animal a(10);
// Animal * b = new Animal(100);

// Animal c = a;
// // Animal d(b);
// Animal animal1(c);

Animal a ;
a.age = 3;

Animal*b = new Animal();
b->age = 12;

// manually 
delete b;

    return 0;
 }