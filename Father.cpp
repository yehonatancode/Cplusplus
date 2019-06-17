
#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;
#include <algorithm>

class Father{
    friend class Son;
    string firstname,lastname;
    int features;
    public:
    Father(){firstname="Yoni", lastname="tseva", features=5;}
    Father(string fn,string ln,int f):firstname(fn),lastname(ln),features(f){
        cout << " This is parameter constructor" << endl;
    }
    Father(const Father &other){ 
        firstname=other.firstname;
        lastname=other.lastname;
        features=other.features;
        cout << "This is the copy constructor mate" << endl;
    }
     Father& operator=(const Father& other){
        if(this == &other) return *this;
        else {
            this->firstname = other.firstname;
            this->lastname=other.lastname;
            this->features=other.features;
            cout << "This is the = operator" << endl;
    }
     }
    ~Father(){
        cout << "Father Destructed" << endl;
    }
     };
     class Son : public Father {
         public:
         Son(){ cout << "This is son constructor" << endl;}
         ~Son(){ cout << "Son Deconstructed" << endl;}
     };




int main(){
    
 Father a1;
 Father a2;
 Father a3=a2;
 a2=a1;
 Father a4("Yonos","Plavius",5);
 Son b; 
}