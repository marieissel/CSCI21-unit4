/*
 * Name        : lab3.cpp
 * Author      : Marie Issel
 * Description : Working with trees
 */
#include "lab3.h"


BSTNode::BSTNode() 
{
    left_child_ = NULL; 
    right_child_ = NULL; 
    contents_ = 0;
}

BSTNode::BSTNode(int contents) 
{
    left_child_ = NULL; 
    right_child_ = NULL; 
    contents_ = contents;
}

BSTNode::~BSTNode(void)
{ 
    left_child_ = NULL; 
    right_child_ = NULL; 
}

void BSTNode::set_contents(int contents)
{
    contents_ = contents;
}

int BSTNode::contents() const
{
    return contents_;
}


int& BSTNode::contents()
{
    return contents_;
}

BSTNode* BSTNode::left_child() const
{
    return left_child_;
}

BSTNode*& BSTNode::left_child()
{
    return left_child_;
}

BSTNode* BSTNode::right_child() const
{
    return right_child_;
}

BSTNode*& BSTNode::right_child()
{
    return right_child_;
}


void BSTNode::set_left_child(BSTNode* pass) 
{
    left_child_ = pass;
}


void BSTNode::set_right_child(BSTNode* pass)
{
    right_child_ = pass;
}

