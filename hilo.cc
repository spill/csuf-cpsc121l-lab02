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

int main(int argc, char const *argv[]) {
  int player1 = 1;
  int player2 = 1;

  std::cout << "Player 1, choose  ";
  std::cin >> player1;

  std::cout << "Player 2, guess the secret number:";
  std::cin >> player2;

  if (player2 > player1) {
    std::cout << "Your guess was too high.\n"
              << "Try Again.";
    std::cin >> player2;
    if (player2 == player1) {
      std::cout << "You Win.\n";
    } else {
      std::cout << "You Lose.\n";
    }
  } else if (player2 < player1) {
    std::cout << "Your guess was too low";
    std::cout << "Try again.";
    if (player2 == player1) {
      std::cout << "You Win.\n";
    } else {
      std::cout << "You Lose.\n";
    }
  } else {
    std::cout << "You guessed correctly.\n"
              << "You Win!\n";
  }

  return 0;
}
