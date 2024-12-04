#include <iostream>

int g_c_d(int a, int b) {
    // Check if both inputs are positive integers
    if (a <= 0 || b <= 0) {
        return 0; // Sentinel value for error
    }

    // Use the Euclidean algorithm to compute GCD
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; // The GCD
}

// Example usage
int main() {
    std::cout << "GCD of 18 and 48: " << g_c_d(48, 18) << std::endl; // Output: 6
    std::cout << "GCD of -5 and 15: " << g_c_d(-5, 15) << std::endl; // Output: 0
    std::cout << "GCD of 10 and 0: " << g_c_d(10, 0) << std::endl;   // Output: 0
    return 0;
}