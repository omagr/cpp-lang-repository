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
    B() {cout << "Hello\n";};
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

int B::count = 0;

int main() {
    B::get();

    //? how to access it ? 
    B* ptr = B::get();
    ptr->ext();
    
    cout<<"\nend succesfully!";
    return 0;
}