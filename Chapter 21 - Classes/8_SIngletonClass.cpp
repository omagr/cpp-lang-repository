#include<bits/stdc++.h>
using namespace std;

//! errror
class A {
    private:
    A() {cout << "Hello\n";};
};

class B {
    // if constructor beom untouch outside of class then we can use it inside class 
    private:
    B() {cout << "Hello from B : ";};
    public:
    void ext() {cout << "extra function";};
    static int count;
    static B* get() {
        B* b = new B;
        //# it will delte whebn the whople prgrams end or with delte keyword
        cout << count <<'\n';
        count++;
        return b;
    };
};

class C {
    // if constructor beom untouch outside of class then we can use it inside class 
    private:
    C() {cout << "Hello from C : ";};
    public:
    void ext() {cout << "C extra function";};
    static int count;
    static C* get() {
        if (count == 0) {
            C* c = new C; 
            cout << count <<'\n';
            count++;
            return c;
        };
        return NULL;
    };
};

int B::count = 0;
int C::count = 0;

int main() {  

    //@ mutiple instances of B
    B* ptr1 = B::get(); 
    B* ptr2 = B::get(); 
    B* ptr3 = B::get(); 
    B* ptr4 = B::get(); 

    //@ mutiple instances of C
    C* ptr5 = C::get(); 
    C* ptr6 = C::get(); 
    if (ptr5 != NULL) {
        cout<< "size of ptr5 : " << sizeof(ptr5) << '\n';
        cout<< "Addr of ptr5 : " << ptr5 << '\n';
    };
    if (ptr6 != NULL) {
        cout<< "size of ptr6 : " << sizeof(ptr6) << '\n';
        cout<< "Addr of ptr6 : " << ptr6 << '\n';
    } ;
    // but we want singelton class so 
    cout<<"\nend succesfully!";
    return 0;
}