
/*
 * Project Euler - Problem 3
 * 
 * Find the largest prime factor of the number 600851475143.
 *
 */

#include <iostream>
#include <cmath>

int main () {

  long int startingNumber = 600851475143;
  long int squareRootOfStartingNumber = (long int)floor(sqrt(startingNumber));
  long int index = 2;
  long int largestPrimeFactor = 1;

  while (index <= squareRootOfStartingNumber) {
    if (startingNumber % index != 0) {
      ++index;
    } else {
      startingNumber = startingNumber / index;
      largestPrimeFactor = index;
    }
  }

  if (largestPrimeFactor == 1) {
    largestPrimeFactor = startingNumber;
  }

  std::cout << "Largest prime factor is " << largestPrimeFactor << "\n";
  return 0;
}
