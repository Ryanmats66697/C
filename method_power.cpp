#include <iostream>

class power {
public:
    void square(int a) {
        std::cout << "The square of the number is " << a * a << std::endl;
    }

    void cube(int b) {
        std::cout << "The cube of the number is " << b * b * b << std::endl;
    }
};

int main() {
    power p;
    p.square(5);
    p.cube(5);
    return 0;
}
