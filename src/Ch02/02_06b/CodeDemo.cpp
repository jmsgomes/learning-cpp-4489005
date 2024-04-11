// Learning C++
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño

#include <cstdint>
#include <iostream>
#include <string>

#define CAPACITY 5000
#define DEBUG true

int main() {
  int32_t large = CAPACITY;
  uint8_t small = 37;

#ifdef DEBUG
  std::cout << "[About to perform the addition]" << std::endl;
#endif

  large += small;  // Shorthand for "large = large + small;"
  std::cout << "The large integer is: " << large << std::endl;

  std::cout << std::endl << std::endl;
  return 0;
}
