/***
 * @Patterns
 * *generally contains nested loops (outer, inner)
 * *outer loop is for lines/row and inner loop for columns
 * *conditions where the outer loop controls the number of rows, and the inner loop controls the data in each row containing the contents to be printed
 * #Rules
 * -For outer loop count the no of line.
 * -For inner loop focus on given columns and connect them to rows
 * -Print them inside the inner for loop
 * -Observe symmetry [optional]
 */
#include <bits/stdc++.h>
using namespace std; 


// --------- -------------------------- Pattern 1: basic cube with character
int n = 10; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= n) {
		std::cout << '*';
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 2: basic cube with number
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= n) {
		std::cout << i;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 3: basic cube with increasing number
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= n) {
		std::cout << j;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 4: basic cube with decreasing number
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= n) {
		std::cout << n - j + 1;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 5: basic cube with counting
int n = 3; // input for row
int i = 1; // initialize for row
int cunt = 1;
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= n) {
		std::cout << cunt;
		cunt++;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 6: basic half paramid with *
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= i) {
		std::cout << '*';
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 7: basic half paramid with number
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= i) {
		std::cout << i;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 8: basic half paramid with number
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	int k = j;
	while(j <= i) {
		std::cout << k;
		k++;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 9: basic half paramid with number
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= i) {
		std::cout << i - j + 1;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 10: basic half paramid with number
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= i) {
		std::cout << n - j + 1;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 11
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= i) {
		std::cout << i - j + 1;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 12
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= i) {
		char ch = 'a' + i - 1;
		std::cout << ch;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 13
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= i) {
		char ch = 'a' + j - 1;
		std::cout << ch;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 14
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= n) {
		char ch = 'a' + j - 1;
		std::cout << ch;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 15
int n = 5; // input for row
int i = 1; // initialize for row
int count = 1;
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= n) {
		char ch = 'a' + count - 1;
		std::cout << ch;
		count++;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 16
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= n) {
		char ch = 'a' + i + j - 2;
		std::cout << ch;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 17
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	while(j <= i) {
		char ch = 'a' + i + j - 2;
		std::cout << ch;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 18
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	int j = 1; // initialize for column
	char ch = 'a' + n - 1;
	while(j <= i) {
		ch++;
		std::cout << ch;
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 19
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	// print spaces
	int space = n - i;
	while(space) {
		std::cout << " ";
		space--;
	}
	// print stars
	int j = 1; // initialize for column
	while(j <= i) {
		std::cout << '*';
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 20
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	// print stars
	int j = 1; // initialize for column
	while(j <= n - i + 1) {
		std::cout << '*';
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 21
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	// print space
	int space = i - 1;
	while(space) {
		std::cout << " ";
		space--;
	}
	// print stars
	int j = 1; // initialize for column
	while(j <= n - i + 1) {
		std::cout << '*';
		j++;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 22
int n = 9; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	// print 1st triangle (space)
	int space = n - i;
	while(space) {
		std::cout << " ";
		space--;
	}
	// print 2nd trangle
	int j = 1; // initialize for column
	while(j <= i) {
		std::cout << j;
		j++;
	}
	// print 3rd triangle
	j = i - 1;
	while(j) {
		std::cout << j;
		j--;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 22
int n = 9; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n) {
	// print 1st triangle (space)
	int space = n - i;
	while(space) {
		std::cout << " ";
		space--;
	}
	// print 2nd trangle
	int j = 1; // initialize for column
	while(j <= i) {
		std::cout << j;
		j++;
	}
	// print 3rd triangle
	j = i - 1;
	while(j) {
		std::cout << j;
		j--;
	}
	std::cout << std::endl;
	i++;
}
i = 1;
while(i < n) {
	// print 1st triangle (space)
	int space = i;
	while(space) {
		std::cout << " ";
		space--;
	}
	// print 2nd trangle
	int j = 1; // initialize for column
	while(j <= n - i) {
		std::cout << j;
		j++;
	}
	// print 3rd triangle
	j = n - i - 1;
	while(j) {
		std::cout << j;
		j--;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;

// --------- -------------------------- Pattern 23
int n = 5; // input for row
int i = 1; // initialize for row
std::cout << std::endl;
while(i <= n + 1) {
	// print 1st qurt (12345)
	int j = 1; // initialize for column
	while(j <= n - i + 1) {
		std::cout << j;
		j++;
	}
	// print 2nd qurt (****)
	int k = 1; // initialize for column
	while(k <= 2 * (i - 1)) {
		std::cout << '*';
		k++;
	}
	// print 3rd qurt
	j = n - i + 1;
	while(j) {
		std::cout << j;
		j--;
	}
	std::cout << std::endl;
	i++;
}
std::cout << std::endl;