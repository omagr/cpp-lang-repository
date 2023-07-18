#include <iostream>
#include <iomanip> // for setprecision

/*
  @Fractional Numbers === Floating Point types ==> used to represent the fractional parts in cpp.

  @Precison : it is basically the number of bits you can represent with that type starting with from the number in fromnt of decimal point.
  1.23456780009 ==> Precison is 12. 

  @Suffixes − Suffixes denotes the type of the value. otherwise the default will be double.
  # float floatNum{1.12345678901234567890f}; -> f
  # long double LDNum{1.12345678901234567890L};

  @Prefixes − Prefixes denotes the base of the value. For example, 0x10 indicates hexadecimal value with 0x.

  @float and double: Double type can be used with the long modifier.
  Modifier        Size(in Bytes)      Range                                       Precison
  float	              4               3.4 × 10-38 to 3.4 × 1038 – 1               7
  double	            8               1.7 × 10-308 to 1.7 × 10308 – 1             15
  long double	        12              3.4 × 10-4932 to 3.4 × 104932 – 1           > Double
  */


int main() {
  // Declare and initialize the variables
  float floatNum{1.12345678901234567890f}; // Precision : 7 // note : the suffex whne initializing floating point variable, otherwise the default will be double.

  double DoubleNum{1.12345678901234567890}; // Precision : 15 // note : no need to add suffex bcs it is by default

  long double LDNum{1.12345678901234567890L}; // note : the suffex whne initializing floating point variable, otherwise the default will be double.

  std::cout << "\nPrint out the sizes";
  std::cout << "sizeof float : " << sizeof(float) << std::endl;
  std::cout << "sizeof double : " << sizeof(double) << std::endl;
  std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

  std::cout << "\nSetting out the precision";
  std::cout << std::setprecision(20); // Control the precision from std::cout.
  std::cout << "number1 is : " << floatNum << std::endl;  // 7 digits
  std::cout << "number2 is : " << DoubleNum << std::endl; // 15'ish digits
  std::cout << "number3 is : " << LDNum << std::endl;     // 15+ digits

  std::cout << "\nFloat problems : The precision is usually too limited to 7";
  float number4 = 192400023.90f; // Error : narrowing conversion
  number4 = number4 + 1;         //  garbage value
  std::cout << "number4 : " << number4 << std::endl;

  std::cout << "\nScientific notation";
  // Scientific notation --> it is basically power of 10 multiplier to multiply with our floating point numbers.
  // What we have seen so far in terms of floating point types
  // is fixed notation. There is another notation, scientific
  // that is handy if you have really huge numbers or small numbers
  // to represent
  double number5{192400023};
  double number6{1.92400023e8}; // 1.92400023 * 10^8
  double number7{1.924e8};      // Can ommit the lower 00023

  double number8{0.00000000003498};
  double number9{3.498e-11}; // multiply with 10 exp(-11)

  std::cout << "number5 is : " << number5 << std::endl;
  std::cout << "number6 is : " << number6 << std::endl;
  std::cout << "number7 is : " << number7 << std::endl;
  std::cout << "number8 is : " << number8 << std::endl;
  std::cout << "number9 is : " << number9 << std::endl;

  std::cout << "\nInfinity and Nan"; 
  double number10{ 5.6};
  double number101{-5.6};
  double number11{}; // Initialized to 0
  double number12{}; // Initialized to 0

  // Infinity
  double result{number10 / number11};  // +inf
  double result{number101 / number11}; // -inf

  std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
  std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;

  // NaN
  result = number11 / number12;

  std::cout << number11 << "/" << number12 << " = " << result << std::endl;
  return 0;
}