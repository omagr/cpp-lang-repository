// CPP program to illustrate
// Implementation of push() function

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Empty stack
    stack<int> mystack;
    for (int i = 10; i <= 70; i += 10)
    {
        mystack.push(i);
    }
    for (int i = 1; i <= 3; i++)
    {
        mystack.pop();
    }

    while (!mystack.empty())
    {
        cout << ' ' << mystack.top();
        mystack.pop();
    }
}
