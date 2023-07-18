#include <iostream> 

int main() {
  // @how to fuck system's mother ???
  int *data = new int[10000000000000000]; // it may give an error about exceding array size
  for (size_t i{0}; i < 10000000; ++i) {
    int *data = new int[100000000]; // ohh fuck
  }

  // @exception mechanism, ohhhhhhhhh owo
  for (size_t i{0}; i < 100; ++i) {
    try {
      int *data = new int[1000000000];
    } catch (std::exception& ex) {
      std::cout << "  Something went wrong : " << ex.what() << std::endl;
    }
  }

  // @std::nothrow, ohhhhhhhhh owo
  for (size_t i{0}; i < 100; ++i) {
    int *data = new (std::nothrow) int[1000000000];
    if (data != nullptr) {
      std::cout << "Data allocated" << std::endl;
    } else {
      std::cout << "Data allocation failed" << std::endl;
    }
  }
  return 0;
}
