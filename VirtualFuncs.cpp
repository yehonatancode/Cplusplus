#include <stdio.h>
#include <iostream>
using namespace std;



class XX {
 public:
 void aa() {std::cout << "X's aa func" << endl;}
 virtual void bb() {std::cout << "X's bb func" << endl;}
 virtual void cc() {std::cout <<"X's cc func" << endl;}
 virtual void dd()=0;
 static void ee() {std::cout << "Okay" <<endl;}
 };
 class YY: public XX {
 public:    
 void aa() {std::cout <<" Y's aa func" << endl;}
 virtual void bb() {std::cout << "Y's bb func" << endl;}
 void cc() { std::cout << "Y's cc func" << endl;}
 void dd() {std::cout << "Y's dd func" << endl;}
 virtual void ee() {std::cout << "Y's ee func" << endl;}
 };
 int main() {
 XX* zz = new YY();
 zz->aa();
 zz->bb();
 zz->cc();
 zz->dd();
 zz->ee();
 return 0;
 }
