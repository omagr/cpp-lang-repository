#include <iostream>

int main() { 
  const int COUNT{0};
  size_t i{0}; // Iterator declaration

  do {
    std::cout << i << " : I love C++" << std::endl;
    ++i; // Incrementation
  } while (i < COUNT);

  std::cout << "Loop done!" << std::endl;
  return 0;
}

// #what to choose ? 
// -1 forloop, when you dont need iterator outside of the block and when condition met the loop will run
// -2 while, when you need iterator outside of block and use and when condition met the loop will run
// -3 dowhile, when you dont need iterator outside of the block and on evevry 1st time the loop should run at any cost