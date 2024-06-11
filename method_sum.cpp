#include <iostream>

class add {
public:
    add(int a, int b) {
        std::cout << a+b;
    }
};

int main() {
    add o(5,6);
    return 0;
}
