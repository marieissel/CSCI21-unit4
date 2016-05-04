/*
 * Name        : lab4.h
 * Author      : Marie Issel
 * Description : Header File for Lab #4
 */

#ifndef LAB_D
#define LAB_D

#include <iostream>
#include <string>
#include <cstring>
//#include "lab3.cpp"
#include "bst_node.h"
#include <sstream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

class BSTree 
{
    public:
    BSTree(); //sets root_ to NULL and sets size_ to 0
    ~BSTree(void); // calls Clear()
    
    bool Insert(int); //--calls private function Insert(int, root)
    void Clear(); //--calls private function Clear(root)
    unsigned int size() const; // --Accessor for size_
    string InOrder(); //--calls private function InOrder(root)
    
    private:
    bool Insert(int data, BSTNode*&); //--creates a new BSTNode, inserts it into the tree, and returns true. if the integer is already in the tree, does not insert, and returns false
    void Clear(BSTNode*&); //--clears the entire contents of the tree, freeing all memory associated with all nodes
    string InOrder(BSTNode*); //--creates a string of the data in all nodes in the tree, in ascending order separate by spaces (there should be a space after the last output value)
    
    BSTNode* root_; //--points to the root node of a binary search tree
    unsigned int size_; //--holds the number of nodes in the tree
    
};

#endif