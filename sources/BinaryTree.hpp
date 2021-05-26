#pragma once

namespace ariel
{
    template <typename T>
    class BinaryTree
    {
    private:
        struct Node
        {
            T _value;
            Node *_left;
            Node *_right;
            Node(T value, Node *left = nullptr, Node *right = nullptr)
                : _value(value), _left(left), _right(right){};
            ~Node() {}
        };

        Node *_root;

    public:
        BinaryTree(){};
        BinaryTree(BinaryTree &t){};
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
        friend ostream &operator<<(ostream &os, const BinaryTree &t)
        {
            return os;
        }

        class iterator
        {
        protected:
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

            bool operator!=(const iterator &other) const
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
        class inOrder_iterator : public iterator
        {
            iterator &operator++(int)
            {
                return *this;
            }
            iterator &operator++()
            {
                return *this;
            }
        };
        class preOrder_itertator : public iterator
        {
            iterator &operator++(int)
            {
                return *this;
            }
            iterator &operator++()
            {
                return *this;
            }
        };
        class postOrder_iterator : public iterator
        {
            iterator &operator++(int)
            {
                return *this;
            }
            iterator &operator++()
            {
                return *this;
            }
        };
        iterator &begin()
        {
            return *(new inOrder_iterator());
        }
        iterator &end()
        {
            return *(new inOrder_iterator());
        }
        iterator &begin_preorder()
        {
            return *(new preOrder_itertator());
        }
        iterator &end_preorder()
        {
            return *(new preOrder_itertator());
        }
        iterator &begin_inorder()
        {
            return *(new inOrder_iterator());
        }
        iterator &end_inorder()
        {
            return *(new inOrder_iterator());
        }
        iterator &begin_postorder()
        {
            return *(new postOrder_iterator());
        }
        iterator &end_postorder()
        {
            return *(new postOrder_iterator());
        }
    };
}