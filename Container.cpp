#include <iostream>
using namespace std;


template <typename T>
class Container {
 T a,b;
public:
 Container(T a,T b) : a(a), b(b) {}
 struct iterator {
 // Constructor
 iterator(T type) : type(type) {}
 bool operator!=(const iterator& iter) const { return type !=iter.type; }
 const T& operator*() const { return type; }
 iterator& operator++(){ ++type; return *this; }
 private:
 T type;
 };
 iterator begin() const { return iterator(a); }
 iterator end() const { return iterator(b); }
};
void for_each_function(int element) {
 std::cout << element << " ";
}

int main() {
 Container<int> c(1,300000);
 Container<int>::iterator it = c.begin();
 // Best way to iterator:
 for (const auto& element : c)
 {
 std::cout << element << " " << "YONI";
 }
 std::cout << std::endl;
}