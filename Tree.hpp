
#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;
#include <algorithm>
#praga once


class Tree{
        struct node{
            int data;
            node *parentt;
            node *leftt;
            node *rightt;
        };
        int _size;
        node* root;
        void postorder(node* ptr, int indent);
        node* insert(int key, node* ptr);
        node* contains(int key, node* ptr);
        void remove(node* ptr);
        void freeSubtree(node* ptr);
        node* allocateLeaf(int key);
        node* MinValueSubtree(node* root);
  public:
 
    void insert(int i);
    void remove(int i);
    int size();
    node* root();
    bool contains(int i);
    int parent(int i);
    int left(int i);
    int right(int i);
    print();
    Tree();
    ~Tree();
    
}