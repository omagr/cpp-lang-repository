#include <iostream>
using namespace std;

int main()
{
    int a=12,*p;
    p = &a;
    
    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;

    // derefereing
    *p = 24;
    cout << "*p: " << *p << endl;
    int b = 48;
    *p = b;
    cout << "*p: " << *p << endl;
    return 0;
}
