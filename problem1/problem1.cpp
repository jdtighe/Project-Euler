
/*
 * Project Euler - Problem 1
 * 
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 */

#include <iostream>

int main () {

  const int UPPER_BOUND = 1000;
  int sumOfMultiples = 0;

  for (int i = 1; i < UPPER_BOUND; ++i) {
    if (i % 3 == 0 || i % 5 == 0) {
      sumOfMultiples += i;
    }
  }

  std::cout << "The sum of the multiples of 3 and 5 below " << UPPER_BOUND << " is " << sumOfMultiples << "\n";

  return 0;
}
