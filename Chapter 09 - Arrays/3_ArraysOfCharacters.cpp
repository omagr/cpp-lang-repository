#include <iostream>

int main() {

  char message[5]{'H', 'e', 'l', 'l', 'o'};
  //   Read
  for (auto c : message) { std::cout << c; }
  std::cout << std::endl;
  std::cout << "sizeof(message) : " << sizeof(message) << std::endl;
  // Write
  message[0] = 'A';
  message[4] = 'A';
  std::cout << std::endl;
  for (auto c : message) { std::cout << c; }

  // @we Can print it without loop as well
  std::cout << message << std::endl; // !AellAAellAoA���W
  // ?but why? it has to proper c string with null termination '\0'
  // -If a character array is null terminated, it's called as C-String
  // #IT TELLS TO COMPILER THAT STOP DUDUE THE STRING HAS END
  char message2[]{'H', 'e', 'l', 'l', 'o', '\0'};
  std::cout << message2 << std::endl;
  std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;

  // @Auto filled with null termination
  char message3[6]{'H', 'e', 'l', 'l', 'o'};
  // -> as we have 6 element and we only inilize with 5 just like int array the rest of them space are inilized with 0, the same thing will be work rest of space will inilized with '\0'
  std::cout << message3 << std::endl;
  std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl;

  // @This is not a c string , as there is not null character
  char message4[]{'H', 'e', 'l', 'l', 'o'};

  // @String literal
  char message5[]{"Hello World"}; //! it will automatically put '\0'
  std::cout << "message5 : " << message5 << std::endl;
  std::cout << "sizeof(message5) : " << sizeof(message5) << std::endl;
  // - size would be 6 null terminator oifc, again we have to use ""
  message5[1] = '6';
  std::cout << "message5 : " << message5 << std::endl;

  // Can't safely print out arrays other than those of characters
  int numbers[]{1, 2, 3, 4, 5};
  std::cout << "numbers :  " << numbers << std::endl;

  return 0;
}