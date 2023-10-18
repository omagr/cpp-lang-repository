#include <iostream>
using namespace std;

int sizefunc ();
int main()
{
    cout << sizefunc();                 // 4
    cout << sizeof(sizefunc());         // 4
    cout << sizeof(multipleVars());     // 4

    return 0;
};
int sizefunc () {
    int a = sizeof(main());
    return a;
};
int multipleVars () {
    int a = 67, b = 90, c= 67;;
    return a+b+c;
};