
#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;
#include <algorithm>



int main(){

std::list<int> list1 = {1,2,3,4,1,1,1,1}; 
std::list<int> list2 = {1,2,3,4,1,1,1,1};
list1.insert(list1.begin(),3); 
list1.emplace(list1.begin(),3); 
list1.erase(list1.begin());
list1.pop_back(); 
list1.pop_front(); 
list1.resize(10,5); 
list1.reverse();
list1.sort();
list2.swap(list1);
std::for_each(list2.begin(),list2.end(),[](const int& i) { std::cout <<
i << " "; });
}