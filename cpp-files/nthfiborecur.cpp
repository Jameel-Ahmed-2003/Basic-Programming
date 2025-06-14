#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base cases: F(0) = 0, F(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

int main() {
    int n;

    std::cout << "Enter the position (n) in the Fibonacci sequence: ";
    std::cin >> n;

    int result = fibonacci(n);

    std::cout << "Fibonacci number at position " << n << " is: " << result << std::endl;

    return 0;
}
