// Learning C++
// Exercise 03_06
// Pointers, by Eduardo Corpeño

#include <iostream>
#include <string>

int main() {
  int a = 37;
  int *ptr;
  ptr = &a;
  std::cout << "       The content of a is " << a << std::endl;
  std::cout << "     The content of ptr is " << ptr << std::endl;
  std::cout << "ptr is pointing to address " << ptr << std::endl;
  std::cout << "       The address of a is " << &a << std::endl;
  std::cout << "     The content at ptr is " << *ptr << std::endl;
  std::cout << "     The address of ptr is " << ptr << std::endl;

  std::cout << std::endl << std::endl;
  return 0;
}
