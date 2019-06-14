#include <vector>
02 #include <iostream>
03 using namespace std;
04
05 template<typename T>
06 class TwoVectors {
07 vector<T> theVectors[2];
08 public:
09 int sizeOfVector(int i) {
10 return theVectors[i].size();
11 }
12 };
13
14 template<typename T>
15 ostream& operator<< (ostream& out, const TwoVectors<T>& v) {
16 out << "first vector has size " << v.sizeOfVector(0) << endl;
17 out << "2nd vector has size " << v.sizeOfVector(1) << endl;
18 return out;
19 }
20
21 int main() {
22 TwoVectors<int> v;
23 cout << v << endl;
24 return 0;
25 }