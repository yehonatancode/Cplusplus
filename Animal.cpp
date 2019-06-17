#include <iostream>
using namespace std;

class Animal{
    private:
    string name;
    
    public:
    Animal(){ cout << "This is the default constructor" << endl;}
    Animal(const Animal& other):name(other.name){ cout << "This is the copy constructor" << endl;}
    Animal& operator=(const Animal& other){
        if(this == &other) return *this;
        else this->name = other.name;
    }
    bool operator==(const Animal& other){
        if(this == &other) return true;
        return false;
    }
    friend std::ostream& operator <<(std::ostream &os, const Animal &other){
        return os << other.name;
    }
    void setName(string name) {this->name =name;}
    void MyName() { cout << "my name is" << name << endl;}
};

int main(){
    Animal a;
    a.setName("Johnny");
    a.MyName();
    Animal b;
    b.setName("Sagi");
    b.MyName();
    b=a;
    b.MyName();
    
}