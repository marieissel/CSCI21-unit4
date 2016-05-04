/*
 * Name        : lab4.cpp
 * Author      : Marie Issel
 * Description : Working with trees
 */
#include "bs_tree.h"

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
    if (root_ != NULL) {
        return Insert(data, root_);
    } else {
        root_ = new BSTNode(data);
        size_ = 1;
        return true;
    }
    return false;
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
    if (data < node->contents())
    {
        if (node->left_child() != NULL)
        {
            return Insert(data, node->left_child());
        }
        else
        {
            node->set_left_child(new BSTNode(data));
            size_ += 1;
            return true;
        }
    } else {
        if (data > node->contents())
        {
            if (node->right_child() != NULL)
            {
                return Insert(data, node->right_child());
            }
            else
            {
                node->set_right_child(new BSTNode(data));
                size_ += 1;
                return true;
            }
        } else {
            return false;
        }
    }
}

void BSTree::Clear(BSTNode*& node)
{
    if (node != NULL) {
        Clear(node->left_child());
        Clear(node->right_child());
        delete node;
        node = NULL;
    }
    size_ = 0;
}

string BSTree::InOrder(BSTNode* node)
{
    stringstream ss;
    ss << "";
    if (node != NULL)
    {
        ss << InOrder(node->left_child()) << node->contents() << " " << InOrder(node->right_child());
    }
    return ss.str();
}
