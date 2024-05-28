#include <iostream>

int main() {
    int a, b, c, ch;
    std::cout << "Enter a & b: ";
    std::cin >> a >> b;
    std::cout << "Enter choice : ";
    std::cin >> ch;

    switch(ch) {
        case 1:
            c = a + b;
            std::cout << "Result: " << c << std::endl;
            break;
        case 2:
            c = a - b;
            std::cout << "Result: " << c << std::endl;
            break;
        case 3:
            c = a * b;
            std::cout << "Result: " << c << std::endl;
            break;
        case 4:
            c = a / b;
            std::cout << "Result: " << c << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
    }

    return 0;
}
