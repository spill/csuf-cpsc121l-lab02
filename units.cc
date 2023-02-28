// Ryan Trinh
// CPSC 120-06
// 2022-08-31
// rtrinh02@csu.fullerton.edu
// @rtrinh02
//
// Lab 03-02
// Partners: @thomasn1003
//
// This is my my program.
//

#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  double milliliters = 1;
  std::cout << "How many milliliters do you want to convert? ";
  std::cin >> milliliters;
  double teaspoons = milliliters / 4.929;
  double tablespoons = teaspoons / 3.0;
  double ounces = tablespoons / 2.0;
  double cups = ounces / 8.0;
  std::cout << milliliters << " ml = " << teaspoons << " tsp = " << tablespoons
            << " tbsp = " << ounces << " oz = " << cups << " cups\n";
  return 0;
}
