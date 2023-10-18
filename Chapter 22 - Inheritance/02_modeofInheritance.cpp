#include<bits/stdc++.h>
using namespace std;

// MODES OF INHERITANCE
// 1. public  (Visible to everyone)
// 2. protected (Visible to current class and derived class only)
// 3. private (Visible to current class only)

/*
 * Modes of inheritance in C++ 
 * Public mode : In the public mode of inheritance, when a child class is derived from the base or parent class, then the public member of the base class or parent class will become public in the child class also, in the same way, the protected member of the base class becomes protected in the child class, and private members of the base class are not accessible in the derived class.
 * Protected mode : In protected mode, when a child class is derived from a base class or parent class, then both public and protected members of the base class will become protected in the derived class, and private members of the base class are again not accessible in the derived class. In contrast, protected members can be easily accessed in the derived class.
 * Private mode : In private mode, when a child class is derived from a base class, then both public and protected members of the base class will become private in the derived class, and private members of the base class are again not accessible in the derived class.
*/

class base1 {
    int z {10}; // 4
    public: char a {'a'}; // 1
};

//* private is available not accessible 
class drived1 : public base1 {
    public: char b {'b'}; // 1
}; // 8

int main() {
    drived1 x;
    cout << x.a << '\t' << x.b << '\n';
    std::cout << "sizeof : " << sizeof(x);
    return 0;
}

class Base {
    private: int a {0};
    protected: int b {1};
    public: int c {2};
};

class drived : public base {
    private: int d {0};
    protected: int e {1};
    public: int f {2};
}

//* public -> public (f, c) | private (d) | protected (b,e) | not accessible (a)
//* protected -> public (f) | private (d) | protected (b,c,e) | not accessible (a)
//* private (by default) -> public (f) | private (d, b, c) | protected (e) | not accessible (a)
