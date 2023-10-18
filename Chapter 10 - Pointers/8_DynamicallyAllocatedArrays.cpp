#include <iostream>

int main() {
  const size_t size{10};
  //@ Different ways you can declare an array
  //# dynamically and how they are initialized - contain garbage  values
  double *p_salaries{new double[size]};
  //# All values initialized to 0
  int *p_students{new (std::nothrow) int[size]{}};
  //# Allocating memory space for an array  of size double vars. First 5 will be
  //initialized with 1,2,3,4,5, and the rest will be 0's.
  double *p_scores{new (std::nothrow) double[size]{1, 2, 3, 4, 5}};

  //@ nullptr check and use the allocated array
  if (p_scores) {
    std::cout << "size of scores (it's a regular pointer) : "
              << sizeof(p_scores) << std::endl;
    std::cout << "Successfully allocated memory for scores." << std::endl;
    // Print out elements. Can use regular array access notation, or pointer
    // arithmetic
    for (size_t i{}; i < size; ++i) {
      std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i)
                << std::endl;
    }
  }

  //@ delteing and nulling the pointer
  delete[] p_salaries;
  p_salaries = nullptr;
  delete[] p_students;
  p_students = nullptr;
  delete[] p_scores;
  p_scores = nullptr;

  //@ Static arrays Vs dynamic arrays
  int scores[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //# Stack
  double *p2_salaries{
      new double[size]}; //# Heap - stde::size wont work bcs they wont sopport
                         //range based forloops

  //@ becaus its array thats why its working
  std::cout << "scores size : " << std::size(scores) << std::endl;
  for (auto s : scores) {
    std::cout << "value : " << s << std::endl;
  }
  // @ because its a pointer thats why its not working
  std::cout << "p_scores1 size : " << std::size(p_scores) << std::endl;
  for (auto s : p_scores1) {
    std::cout << "value : " << s << std::endl;
  }
  return 0;
}