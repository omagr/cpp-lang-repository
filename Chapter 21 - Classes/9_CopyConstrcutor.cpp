#include<bits/stdc++.h>
using namespace std;

class A {
    int x = 10; char b = '0';
    public:
    int get() {return x;};
    //# deafult constructor
    A() {cout << "deafult \t";}; 
    //# parameterized constructor
    A(int a) {
        cout << "parameterized \n";
        x=a;
    };

    //# copy constructor
    A(A &t) {
        cout<<"copy constrcutor"; 
        x=t.x;
    };

    //# copy constructor w/0 &
    //! A a3(a2) 
    //! -> called copyConstrcutor -> A t=obj -> called copyConstrcutor -> A t=obj [rescursion] 
    //! then wehnever be do make copy of it then it will called now 

    A(A t) {
        cout<<"copy constrcutor"; 
        x=t.x;
    };
}; 

int main() {   
    A a1(12);
    cout << a1.get() << '\n';
    // but now i want to copy all the prv data from old obj to new obj then 
    
    //# default copy constrcutor
    A a2 = a1;
    cout << '\n' << a2.get() << '\n'; 

    // but if we dont use & 
    A a3(a2);
    
    cout<<"\nend succesfully!";
    return 0;
}