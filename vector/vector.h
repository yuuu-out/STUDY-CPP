#pragma once
#include<assert.h>
#include<iostream>
#include<cstring>
namespace my {
    template<class T>
    class vector {
    public:
        typedef T* iterator;
        typedef const T* const_iterator;
        size_t size() const {
            return _finish - _start;
        }

        size_t capacity() const {
            return _end_of_storage - _start;
        }
        
        void reserve(int s) {
            assert(s > 0);
            if(s > capacity()) {
                int old_size = size();
                iterator tmp = new T[s];
                if(_start) memcpy(tmp, _start, old_size * sizeof(T));
                delete[] _start;
                _start = tmp;
                _finish = tmp + old_size;
                _end_of_storage = tmp + s;    
            } 
            else if(s > size()) {
                _finish = _start + s;
            }
            else {
                return;
            }
        }

        T operator[](size_t i) {
            assert(i < size());
            return _start[i];
        }

        void print() const {
            for(int i = 0; i < size(); i++) {
                std::cout << _start[i] << ' ';
            }
            std::cout << std::endl;
        }

        iterator begin() {
            return _start;
        }

        iterator end() {
            return _finish;
        }

        void push_back(T x) {
            // 扩容
            if(_finish == _end_of_storage) reserve(capacity() == 0 ? 4 : capacity() * 2);
            *_finish = x;
            _finish++;
        }

        iterator insert(iterator pos, T x) {
            assert(pos >= _start);
            assert(pos < _finish);
            // 扩容
            if(_finish == _end_of_storage) {
                int L = pos - _start;
                reserve(capacity() == 0 ? 4 : capacity() * 2);
                pos = _start + L;
            }
            iterator end = _finish - 1;
            while(end >= pos) {
                *end = *(end - 1);
                end--;
            }
            *pos = x;
            return pos;
        }

        iterator erase(iterator pos) {
            assert(pos >= _start);
            assert(pos < _finish);
            iterator it = pos;
            while(it != _finish - 1) {
                *it = *(it + 1);
                it++;
            }
            _finish--;
            return pos;
        }

        void resize(size_t n, T x = T()) {
            if(n > size()) {
                if(n > capacity()) reserve(n);
                size_t tmp = size();
                while(tmp < n) {
                    _start[tmp] = x;
                    tmp++;
                }
            }
            _finish = _start + n;
        }

        ~vector() {
            delete[] _start;
        }

    private:
        iterator _start = nullptr;
        iterator _finish = nullptr;
        iterator _end_of_storage = nullptr;
    };
};