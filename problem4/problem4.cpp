
/*
 * Project Euler - Problem 4
 * 
 * Find the largest palindrome made from the product of two
 * 3-digit numbers.
 *
 */

#include <iostream>
#include <vector>

bool isPalindrome(int number) {

  std::vector<int> digitsOfNumber;

  // Parse number into individual digits
  while (number > 0) {
    int digit = number % 10;
    digitsOfNumber.push_back(digit);
    number /= 10;
  }

  // Use vector of digits to check if number is a palindrome
  std::vector<int>::iterator front = digitsOfNumber.begin();
  std::vector<int>::iterator back = digitsOfNumber.end() - 1;
  bool result = true;

  while (front < back) {

    if (*front != *back) {
      result = false;
      break;
    }

    ++front;
    --back;
  }

  return result;
}

int main () {

  int largestPalindrome = 0;

  for (int i = 100; i < 1000; ++i) {
    for (int j = i; j < 1000; ++j) {
      int product = i * j;
      if (isPalindrome(product) && product > largestPalindrome) {
	largestPalindrome = product;
      }
    }
  } 

  std::cout << "Largest Palindrome is " << largestPalindrome << "\n";
  return 0;
}
