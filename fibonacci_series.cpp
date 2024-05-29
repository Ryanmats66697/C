#include <iostream>

int main() {
    int n, first = 0, second = 1, next;

    std::cout << "Enter the number of terms for Fibonacci Series: ";
    std::cin >> n;

    std::cout << "Fibonacci Series up to " << n << " terms:" << std::endl;

    for (int i = 0; i <=n; ++i) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        std::cout << next << " ";
    }

    return 0;
}
