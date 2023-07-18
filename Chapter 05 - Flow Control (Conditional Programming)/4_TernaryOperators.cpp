#include <iostream>

// ! condition: option a & b must be of same type pr atleast convertable, if its not then it willl give compile errs

int main() {

  int max{};
  int a{35};
  int b{200};
  int b{(a > b) ? 20 : 10};

  std::cout << std::endl;
  std::cout << "using regular if " << std::endl;

  /*
  if(a >  b){
      max = a;
  }else{
      max = b;
  }
  */

  max = (a > b) ? a : b; // Ternary operator
  std::cout << "max : " << max << std::endl;

// ! option a & b must be of same type pr atleast convertable, if its not then it willl give compile errs
  int b{(a > b) ? 20 : 'Apple'};

  return 0;
}