
/*
 * Project Euler - Problem 6
 * 
 * Find the difference between the sum of the squares of the first 
 * one hundred natural numbers and the square of the sum.
 *
 */

#include <iostream>

int main () {
  int startNumber = 1;
  int endNumber = 100;
  int sum = endNumber * (startNumber + endNumber) / 2;
  int squareOfSum = sum * sum;

  int sumOfSquares = 0;
  for (int i = startNumber; i <= endNumber; ++i) {
    sumOfSquares += i * i;
  }

  int difference = squareOfSum - sumOfSquares;
  std::cout << "Difference is " << difference << std::endl;
}
