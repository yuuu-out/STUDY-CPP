#include<iostream>
#include"list.h"
using namespace my;
int main() {
    list<int> lt;
    lt.push_back(1);
    lt.push_back(2);
    lt.push_back(3);
    lt.push_back(4);
    lt.push_back(5);
    lt.push_back(6);

    list<int>::iterator it = lt.begin();
    lt.print_container();
    return 0;
}