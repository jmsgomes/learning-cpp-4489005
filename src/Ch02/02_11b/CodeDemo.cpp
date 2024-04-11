// Learning C++
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño

#include <cstdint>
#include <iostream>

int main() {
  int fahrenheit = 100;
  int celsius;

  celsius = (fahrenheit - 32) * (float)5 / 9.0;
  std::cout << "Fahrenheit: " << fahrenheit << std::endl;
  std::cout << "Celsius: " << celsius << std::endl;
  std::cout << fahrenheit << " degrees Fahrenheit is " << celsius
            << " degrees Celsius." << std::endl;

  double weight = 10.99;
  std::cout << "Float:         : " << weight << std::endl;
  std::cout << "Integer part:  : " << (int)weight << std::endl;
  std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000)
            << std::endl;

  std::cout << std::endl << std::endl;
  return 0;
}
