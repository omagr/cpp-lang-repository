#include <iostream>
/*
 * Explicit template arguments to impilicit convert argument types
 */

//@ template difinition
template <typename T>
T maximum(T a, T b);

int main()
{
	//* int
	int a{10};
	int b{23};

	//* double
	double c{34.7};
	double d{23.4};

	//@ template instance  
	auto max = maximum<int>(c, d); // 34.4 -> 34
	std::cout << "max : " << max << std::endl;
	
	max = maximum<double>(c, a);
	std::cout << "max : " << max << std::endl;

	max = maximum (c, a); //! bcoz the comp doesnt know what t is typeof
	std::cout << "max : " << max << std::endl;
	return 0;
}

//@ template declartion
template <typename T>
T maximum(T a, T b) { return (a > b) ? a : b; };