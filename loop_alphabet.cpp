#include <iostream>

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (char ch = 'A'; ch < 'A' + i; ++ch) {
            std::cout << ch;
            if (ch < 'A' + i - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
