// Learning C++
// Exercise 02_03
// Using Variables, by Eduardo Corpeño

#include <iostream>

// Global variables are
// * Accessible to all parts of code.
// * Managed statically by the compiler.
// * Allocated in data segment of memory.
// * To be avoided as much as possible, unless strictly necessary.
int a, b = 5;

int main() {
  // Local variables are:
  // * Accessible in their scope and nested scopes
  // * Called "automatic variables" and are managed by the compiler.
  // * Allocated in the stack segment of memory
  bool my_flag;
  a = 7;
  my_flag = false;  // 0 is false in C++
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << "my_flag = " << my_flag << std::endl;

  my_flag = true;  // 0 is false in C++
  std::cout << "my_flag = " << my_flag << std::endl;
  std::cout << "a + b = " << a + b << std::endl;
  std::cout << "b - a = " << b - a << std::endl;

  unsigned int positive;
  positive = b - a;
  // Expression data typed must match but this is not enforced by the compiler!
  std::cout << "b - a (unsigned)" << positive << std::endl;

  std::cout << std::endl << std::endl;
  return 0;
}
