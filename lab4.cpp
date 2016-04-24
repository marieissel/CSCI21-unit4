/*
 * Name        : lab4.cpp
 * Author      : Marie Issel
 * Description : Working with trees
 */
#include "lab4.h"

BSTree::BSTree()
{
    root_ = NULL; 
    size_ = 0; 
}

BSTree::~BSTree(void)
{ 
   Clear();
}

bool BSTree::Insert(int data)
{
    Insert(data, root_);
}

void BSTree::Clear()
{
    Clear(root_);
}

unsigned int BSTree::size() const
{
    return size_;
}

string BSTree::InOrder()
{
    return InOrder(root_);
}

bool BSTree::Insert(int data, BSTNode*& node)
{
    
}

void BSTree::Clear(BSTNode*& node)
{
    
}

string BSTree::InOrder(BSTNode*)
{
    
}