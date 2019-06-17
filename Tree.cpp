
#include <stdio.h>
#include <iostream>
using namespace std;
#include <algorithm>
#include "Tree.hpp"

class Tree{

        int _size;
        node* root;
        void Tree::postorder(node* ptr, int indent){
        if(ptr != NULL) {
		if(ptr->right) {
			postorder(ptr->right, indent+4);
		}
		if (indent) {
			cout << setw(indent) << ' ';
		}
		if (ptr->right) cout<<" /\n" << setw(indent) << ' ';
		cout<< ptr->key << "\n ";
		if(ptr->left) {
			cout << setw(indent) << ' ' <<" \\\n";
			postorder(ptr->left, indent+4);
		}
	}
        }
        Tree::node* Tree::insert(int key, node* ptr){
            if(ptr==NULL){
                allocateLeaf(ptr);
                _size++;
            }
            else if(key>ptr->key){
                ptr->right=insert(key,ptr->right);
                ptr->right->parent=ptr;
            }
            else if(key<ptr-key){
                ptr->left=insert(key,ptr->left);
                ptr->left->parent=ptr;
            }
            else throw std::runtime_error ("There has been a problem with the key, it's duplicated.");
            return ptr;
        }
        Tree::node* Tree::contains(int key, node* ptr){
            if(ptr == NULL || key == ptr->key) return ptr;
            else if(key>ptr->key) return contains(key,ptr->right);
            else  return contains(key,ptr->left);
        }
        void Tree::remove(node* ptr){
            node* parent= ptr->parent;
            
            if(ptr->left == NULL && ptr->right ==NULL){
                if(parent ==NULL) {_root = NULL;}
                  else{
                         if(parent->key < ptr->key){parent->right = NULL;}
                         
                         else {parent->left = NULL;}
                  }
            delete ptr;
            }
            
            
            else if(ptr->left == NULL){
                        if(parent==NULL){
                            this->_root=ptr->right;
                            this->_root->parent=NULL;
                        }
                        else {
                            if(parent->key < ptr->key){
                                parent->right = ptr->right;
                                ptr->right->parent = parent;
                            }
                            else 
                            {
                                parent->left = ptr->right;
                                ptr->right->parent = parent;
                            }
                        }
                        delete ptr;
            }
            else if( ptr->right ==NULL){
                    if(parent==NULL){
                        this->_root = ptr->left;
                        this->_root->parent=NULL;
                    }
                    else {
                            if(parent->key<ptr->key){
                                parent->right = ptr->left;
                                ptr->left->parent=parent;
                                
                            }
                            else{
                                    parent->left = ptr->left;
				                	ptr->left->parent = parent;
			                	}
                        }
                    }
                delete ptr;
            }
            else {
                node* temp = MinValueSubtree(ptr->right);
                int _key=temp->key;
                remove(temp);
                ptr->key = _key;
                }
        }
       void Tree::freeSubtree(node* ptr){
            if(ptr !=NULL){
                     freeSubtree(ptr->right);
                freeSubtree(ptr->left);
                delete ptr;
            }
        }
        node* allocateLeaf(int key){
               node temp = new node;
            temp->key=key;
            temp->parent=NULL;
            temp->left=NULL;
            temp->right=NULL;
            return temp;
        }
        Tree::node* Tree::MinValueSubtree(node* root){
            node* current =root;
            while(current->left !=NULL){
                current = current->left;
            }
            return current;
        }
        
 
    void insert(int i){
        if(_root ==NULL){
         _root =allocateLeaf(i);
         _size++;
        }
        else insert(i,_root);
    }
    void remove(int i)}
    node* ans = contains(i,_root);
    if(ans==NULL || _root == NULL){
        throw std::runtime_error("no keys available in the tree");
    }
    else{
        remove(ans);
        _size--;
    }
    }
    
    
    
    int Tree::size(){return _size;}
    node*  Tree::root(){
        if(_root ==NULL) throw runtime_error("The tree is empty");
       else return _root-key;}
    bool contains(int key){
        if(contains(key,_root)==NULL) return false;
        return true;
    }
    int Tree::parent(int key){
        node* temp = contains(key,_root);
        if(temp ==NULL) throw runtime_error("no such key in the tree");
        if(temp->parent !=NULL) return temp->parent->key;
    }
    int Tree::left(int key){
        node* temp = contains(key,_root)
        if(temp == NULL) throw runtime_error("no such key");
        if(temp->left !=NULL) return temp->left->key;
        }
    int Tree::right(int key){
             node* temp = contains(key,_root);
        if(temp == NULL) throw runtime_error("no such key");
        if(temp->right !=NULL) return temp->right->key;
        }
    
    
    void Tree::print(){
        
        postorder(_root,0);
    }
    Tree::Tree(){
        _root =NULL;
        _size=0;
    }
    Tree::~Tree(){freeSubtree(_root)
    cout << "Tree have been deconstructed" << endl;
    }
    
}