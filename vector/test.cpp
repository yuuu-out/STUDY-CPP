// #include<iostream>
// #include<vector>
// using namespace std;
// void test1() {
//     vector<int> v(10, 2);
//     // vector<int>::iterator it =v.begin();
//     for (auto s : v) {
//         cout << s << ' ';
//     }
//     cout << endl;
//     vector<int>::iterator it = v.begin();
//     for(auto i = it; i != v.end(); i++) {
//         *i *= 3;
//     }
//     for(auto s : v) {
//         cout << s << ' ';
//     }
// }

// void test2() {
//     vector<int> v{1,2,3,4,5,6,7,8,9};
//     for(auto s : v) {
//         cout << s << ' ';
//     }
//     cout << endl;
//     cout << v.size() << endl;
//     cout << v.capacity() << endl;
//     v.reserve(20);
//     cout << v.size() << endl;
//     cout << v.capacity() << endl;
//     vector<int>::reverse_iterator re_it = v.rbegin();
//     for(auto i = re_it; i < v.rend(); i++) {
//         *i += 2;
//         cout << *i << ' ';
//     }
//     cout << endl;
//     v.resize(20);
//     cout << v.size() << endl;
//     cout << v.capacity() << endl;    
// }
// void test3() {
//     vector<string> v1{"iiiiiii"};
//     for(auto s : v1){
//         cout << s << endl;
//     }
//     string ch;
//     cin >> ch;
//     v1.push_back(ch);
//     for(auto s : v1){
//         cout << s << endl;
//     }
// }
// void test4() {
//     vector<int> v{10, 1};
//     vector<vector<int>> v{10, v};

// }
// int main() {
//     // test1();
//     // test2();
//     // test3();
//     test4();
//     return 0;
// }

#include"vector.h"
using namespace my;

void test1() {
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);   
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    // std::cout << v[0] << std::endl;
    auto p = v.begin() + 3;
    p = v.insert(p, 40);
    v.print();
    *p *= 100;
    v.print();
}

void test2() {
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);   
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    // std::cout << v[0] << std::endl;
    // auto p = v.begin() + 3;
    // p = v.insert(p, 40);
    // v.print();
    // *p *= 100;
    // v.print();
    v.resize(20, 0);
    v.print();
    auto it = v.begin() + 3;
    it =  v.erase(it);
    v.print();
    it =  v.erase(it);
    v.print();
}

int main() {
    // vector<int>v;
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(1);
    // std::cout << v[0] << std::endl;
    test2();
    return 0;
}