#include <bits/stdc++.h>
#define MAX 99
using namespace std;

class Stack {
    char* arr; char top;
    public:
    Stack() {
        arr = new char[MAX];
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
    char Top() {
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
            cout << arr[i];
        }
    }
};

//* char str[] == char *str
void reverse_the_Cstr (char str[], int len) {
    Stack S;

    //* loop for push 
    for (size_t i = 0; i < len; i++)
    {
        S.Push(str[i]);
    } //# time complexcity : O(n)

    //* loop for pop 
    for (size_t i = 0; i < len; i++)
    {
        str[i] = S.Top(); //* overwiting the CStraing on the indcies
        S.Pop();
    } //# time complexcity : O(n)

    // #this loop rnning one after another so, 
    // @time complexcity of whole func : O(n) n->len
    // @space complexcity of whole func : O(n) n->len
};

void reverse_the_Cstr_in_const_space (char str[], int len) {
    int k = 0, j = len-1;
    char a, b;
    while (k < j)
    {
        a = str[k]; b = str[j];
        str[k] = b; str[j] = a;
        cout << "a: " << a << ", b: " << b << endl;
        k++; j--;
    }
    // @time complexcity of whole func : O(n)
    // @space complexcity of whole func : O(1)
}

int main()
{
    char cStr [] {"hellow world"};
    reverse_the_Cstr(cStr, strlen(cStr));
    reverse_the_Cstr_in_const_space(cStr, strlen(cStr));
    cout << cStr;
    return 0;
}


https://www.youtube.com/watch?v=S2GfjaTbJa4
