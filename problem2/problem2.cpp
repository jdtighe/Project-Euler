
/*
 * Project Euler - Problem 2
 * 
 * Find the sum of the even valued terms of the Fibonacci sequence whose value 
 * does not exceed four million.
 *
 */

#include <iostream>

int main () {

  const int UPPER_BOUND = 4000000;
  int sumOfEvenTerms = 0;
  int currentFibonacciNumber = 2;
  int previousFibonacciNumber = 1;
  int placeHolder = 0;

  while (currentFibonacciNumber < UPPER_BOUND) {
    if (currentFibonacciNumber % 2 == 0) {
      sumOfEvenTerms += currentFibonacciNumber;
    }

    placeHolder = currentFibonacciNumber;
    currentFibonacciNumber = currentFibonacciNumber + previousFibonacciNumber;
    previousFibonacciNumber = placeHolder;
  }

  std::cout << "The sum of the even Fibonacci numbers less than " << UPPER_BOUND << " is " << sumOfEvenTerms << "\n";

  return 0;
}
