// A function to calculate the sum of two numbers
int add(int num1, int num2) {
  return num1 + num2;
}

// A function to calculate the difference between two numbers
int subtract(int num1, int num2) {
  return num1 - num2;
}

// A function to calculate the product of two numbers
int multiply(int num1, int num2) {
  return num1 * num2;
}

// A function to calculate the quotient of two numbers
int divide(int num1, int num2) {
  return num1 / num2;
}

// A function to check if a number is even or odd
bool isEven(int num) {
  return (num % 2 == 0);
}

// A function to check if a number is prime or composite
bool isPrime(int num) {
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}
