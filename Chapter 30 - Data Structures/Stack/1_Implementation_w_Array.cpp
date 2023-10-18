#include <bits/stdc++.h>
#define MAX 101
using namespace std;

class Stack {
    int * arr;
    int top;

    public:
        Stack() {
            arr = new int[MAX];
            top = -1;
        };

    void Push(int value) {
        if (top == MAX - 1) {
            cout << "\nError: Stack is overflow!";
            return;
        };
        top++;
        arr[top] = value;
    };

    void Pop() {
        if (top == -1) {
            cout << "\nError: Stack is underflow!";
            return;
        };
        top--;
    };

    int Top() {
        if (top == -1) {
            cout << "\nError: Stack is underflow!";
            return -1;
        };
        return arr[top];
    };

    bool Is_empty() {
        if (top == -1) return true;
        return false;
    };

    void Traverse() {
        cout << "\nThe Stack: ";
        for (size_t i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    Stack a;
    cout << "\nIs_empty: " << a.Is_empty();
    a.Pop();
    a.Push(1);
    a.Push(2);
    a.Push(3);
    cout << "\nTop: " << a.Top();
    a.Traverse();
    a.Pop();
    cout << "\nTop: " << a.Top();
    a.Traverse();
    cout << "\nIs_empty: " << a.Is_empty();
    return 0;
}