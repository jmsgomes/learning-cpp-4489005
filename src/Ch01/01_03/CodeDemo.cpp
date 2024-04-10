// Learning C++
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño

#include <iostream>
#include <string>

int main() {
  std::cout << "What is your name? ";
  std::string str;
  std::cin >> str;
  std::cout << "Hello " << str << ", my friend!" << std::endl;

  std::cout << std::endl << std::endl;
  return (0);
}
