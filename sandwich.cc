// Ryan Trinh
// CPSC 120-06
// 2022-08-31
// rtrinh02@csu.fullerton.edu
// @rtrinh02
//
// Lab 02-03
// Partners: @thomasn1003
//
// This is my my program.
//

#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  std::string protein;
  std::string bread;
  std::string condiment;
  std::cout << "Enter a protein: ";
  std::cin >> protein;
  std::cout << "Enter a bread: ";
  std::cin >> bread;
  std::cout << "Enter a condiment: ";
  std::cin >> condiment;
  std::cout << "A " << protein << " sandwich on " << bread << " with "
            << condiment << ".";

  return 0;
}
