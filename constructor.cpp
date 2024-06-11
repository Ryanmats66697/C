#include <iostream>

class student {
public:
    student() {
        std::cout << "This is my new Constructor\n";
    }
};

int main() {
    student o1;
    return 0;
}
