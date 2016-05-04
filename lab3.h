/*
 * Name        : lab3.h
 * Author      : Marie Issel
 * Description : Header File for Lab #3
 */

#ifndef LAB_E
#define LAB_E

#include <iostream>
#include <string>
#include <cstring>
using std::cout;
using std::endl;
using std::string;

class BSTNode 
{
    public:
        BSTNode();
        BSTNode(int contents);
        ~BSTNode(void);
      
        void set_contents(int); //mutator for contents_
        
        int contents() const; //accessor for contents_
        int& contents(); //accessor for contents_
        
        void set_left_child(BSTNode*); //mutator for left_child_
        void set_right_child(BSTNode*); //mutator for right_child_
        
        BSTNode* left_child() const; //accessors for left_child_
        BSTNode*& left_child(); //accessors for left_child_

        BSTNode* right_child() const; //accessor for right_child_
        BSTNode*& right_child(); //accessor for right_child_
        
    private:
        BSTNode* left_child_; //points to left child
        BSTNode* right_child_; //points to right child
        int contents_; //used to store the data contents of a BSTNode
    
    
    
};

#endif