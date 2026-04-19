#pragma once

namespace my {
    template<class T>
    struct list_node {
        T* _data;
        list_node<T>* _next;
        list_node<T>* _prev;
        
        list_node(const T& node = T()) 
        : _data(new T(node))
        , _next(nullptr)
        , _prev(nullptr)
        {}
    };


    template<class T, class Ref, class Ptr>
    struct list_iterator {
        typedef list_node<T> node;
        typedef list_iterator<T, Ref, Ptr> self;   
        
        
        node* _node;


        list_iterator(node* n)
            : _node(n)
        {}


        Ref operator* (){
            return *_node->_data;
        }

        Ptr operator-> () {
            return &_node->_data;
        }

        self& operator++() {
            _node = _node->_next;
            return *this;
        }
        
        self& operator--() {
            _node = _node->_prev;
            return *this;
        }

        bool operator!=(self& it) {
            return this->_node != it._node;
        }

        bool  operator==(self& it) {
            return this->_node == it._node;
        }


    };


    // template<class T>
    // class list_const_iterator {
    //     typedef list_node<T> node;
    //     typedef list_const_iterator<T> Self;
    //     node* _node;


    //     list_iterator(node* n)
    //         : _node(n)
    //     {}


    //     const T& operator* ()  {
    //         return _node->_data;
    //     }

    //     const Self& operator++()  {
    //         _node = _node->next;
    //         return *this;
    //     }
        
    //     const Self& operator--()  {
    //         _node = _node->prev;
    //         return *this;
    //     }

    //     bool operator!=(Self& it)  {
    //         return this->_node != it._node;
    //     }

    //     bool  operator==(Self& it)  {
    //         return this->_node == it._node;
    //     }
    // };


    template<class T> 
    class list {
    public:
        typedef list_node<T> node;
        typedef list_iterator<T, T&, T*> iterator;
        typedef list_iterator<T, const T&, const T*> const_iterator;

        list() {
            _head = new node;
            _head->_next = _head;
            _head->_prev = _head;
            _size = 0;
        }


        iterator begin() {
            return _head->_next;
        }

        iterator end() {
            return _head->_prev;
        }

        const_iterator const_begin() {
            return _head->_next;
        }

        const_iterator const_end() {
            return _head->_prev;
        }

        void push_back(T x) {
            node* newnode = new node(x);

            node* tail = _head->_prev;

            tail->_next = newnode;
            newnode->_prev = tail;
            newnode->_next = _head;
            _head->_prev = newnode;

            ++_size;
        }

        

        void print_container() {
            for(auto& e : *this) {
                std::cout << e << ' ';
            }
        }

        void clear() {
            
        }

        

    private:
        node* _head;
        size_t _size;
    };
};