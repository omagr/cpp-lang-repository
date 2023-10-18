/**
 *? Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
 ** Input: s = "(2+3]"
 ** Output: false
 ** Input: s = "(s+a)-[d+f]*{32-7}+(s)"
 ** Output: true
 *@ propertise must be conserved
 *- every openeing parenthes must find a closing parenthese on its right & vice-versa.
 *- a parnethes close only when all other parenthese opened after it closed. 
*/   

/**
 *# Solution
 *- scan l-to-r
 *- if opening symbol then push to stack
 *- if closing symbol then pop to stack and compare it with its closing pair.
 *- should end with empty list.
*/
// '[()[]]{}()'

#include <bits/stdc++.h>
#include "Stack.h"
using namespace std;

bool blanced_parentheses (char expression[]) {
    Stack str;
    for (size_t i = 0; i < strlen(expression); i++)
    {
        if (expression[i] == '[' || expression[i] ==  '(' || expression[i] == '{')
        {
            str.Push(expression[i]);
        } else if (expression[i] == ']' || expression[i] ==  ')' || expression[i] == '}') {
            if (str.Is_empty()) return false;
            switch (expression[i]) { 
            case ')': 
                if (str.Top() == '(') str.Pop();
                break; 
            case ']': 
                if (str.Top() == '[') str.Pop();
                break; 
            case '}': 
                if (str.Top() == '{') str.Pop();
                break; 
            default: 
                return false;
                break; 
            };
        };
    };
    return str.Is_empty();
}

int main() {
    char exp[] {"[()[]]{"};
    char exp2[] {"[()[]]{}]"};
    cout << "balnced: " << boolalpha << blanced_parentheses(exp2);
    return 0;
};