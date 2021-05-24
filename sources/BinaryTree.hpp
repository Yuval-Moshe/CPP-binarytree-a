#pragma once
#include <stack>

namespace ariel
{
    template <typename T>
    class BinaryTree
    {
    private:
        struct Node
        {
            T _value;
            Node *_parent;
            Node *_left;
            Node *_right;
            Node(T value, Node *parent = nullptr, Node *left = nullptr, Node *right = nullptr)
                : _value(value), _parent(parent), _left(left), _right(right){};
            ~Node()
            {
                delete _parent;
                delete _right;
                delete _left;
            }
        };

        Node *_root;

    public:
        BinaryTree() : _root(nullptr){};

        ~BinaryTree(){};

        BinaryTree &add_root(T value)
        {
            return *this;
        }
        BinaryTree &add_left(T prev, T left)
        {
            return *this;
        }
        BinaryTree &add_right(T prev, T right)
        {
            return *this;
        }
        friend ostream& operator<<(ostream& os, BinaryTree& t){
            return os;
        }

        class iterator
        {
        private:
            Node *node_ptr;

        public:
            iterator(Node *ptr = nullptr) : node_ptr(ptr){};
            iterator &operator++(int)
            {
                return *this;
            }
            iterator &operator++()
            {
                return *this;
            }

            bool operator!=(iterator &other) const
            {
                return false;
            }
            bool operator==(const iterator &other) const
            {
                return false;
            }
            T *operator->() const
            {
                return new T();
            }
            T &operator*() const
            {
                return *(new T());
            }
        };
        iterator &begin(){
            return *(new iterator());
        }
        iterator &end(){
            return *(new iterator());
        }
        iterator &begin_preorder()
        {
            return *(new iterator());
        }
        iterator &end_preorder()
        {
            return *(new iterator());
        }
        iterator &begin_inorder()
        {
            return *(new iterator());
        }
        iterator &end_inorder()
        {
            return *(new iterator());
        }
        iterator &begin_postorder()
        {
            return *(new iterator());
        }
        iterator &end_postorder()
        {
            return *(new iterator());
        }
    };
}