#include <iostream>
#include <cstring>

// function template 
template <typename T>
T maximum(T a, T b)
{
	return (a > b) ? a : b;
}

// template specilaization for char pointer 
template <>
const char* maximum <const char*> (const char *a, const char *b)
{
	return (std::strcmp(a, b) > 0) ? a : b;
}

// template specilaization for int pointer 
template <>
const int* maximum <const int*> (const int *a, const int *b)
{
	return (*a > *b) ? a : b;
}

int main()
{
	int a{10};    
	int b{23};
	double c{34.7};
	double d{23.4};
	std::string e{"hello"};
	std::string f{"world"};

	auto max_int = maximum(a, b);	 // int type deduced
	auto max_double = maximum(c, d); // double type deduced
	auto max_str = maximum(e, f);	 // string type deduced
	std::cout << "max_int : " << max_int << std::endl;
	std::cout << "max_double : " << max_double << std::endl;
	std::cout << "max_str : " << max_str << std::endl;

	//* pointers
	const char *g{"wild"};
	const char *h{"animal"};
    const int *p_a{&a};
    const int *p_b{&b};
	int *p_a2{&a};
    int *p_b2{&b};

	// This won't do what you would expect : BEWARE!
	const char *result = maximum(g, h);
	const int *result2 = maximum(p_a, p_b);
	int *result3 = maximum(p_a2, p_b2);
	
	std::cout << "max(const char*) : " << result << std::endl;
	std::cout << "max(const int*) : " << *result2 << std::endl; // 23
	std::cout << "max(const int*) : " << *result3 << std::endl; // 10
	return 0;
}