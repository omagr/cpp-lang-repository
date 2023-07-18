#include <iostream>

int main() {

  int scores[]{1, 2, 5};

  //    size in >C++17
  int Size{std::size(scores)};
  std::cout << "count : " << Size << std::endl;

  //    size in <C++17
  std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
  std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;
  int Size{sizeof(scores) / sizeof(scores[0])};
  std::cout << "count : " << Size << std::endl;

  for (size_t i{0}; i < count; ++i) {
    std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
  }

  return 0;
} 