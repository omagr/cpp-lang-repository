#include <iostream>
#include <stack>
using namespace std;

int main()
{

	// create a stack of strings
	stack<int> colors;

	for (int i = 10; i <= 50; i += 10)
	{
		colors.push(i);
	}

	// push elements into the stack

	cout << "Stack: ";

	// print elements of stack
	while (!colors.empty())
	{
		cout << colors.top() << ", ";
		colors.pop();
	}

	return 0;
}