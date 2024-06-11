#include <iostream>

class power {
public:
    static int a;
    static void f1() {
        std::cout << "This is the static class function" << std::endl;
    }
};

int power::a = 5;

int main() {
    std::cout << "Static data member is " << power::a << std::endl;
    power::f1();
    return 0;
}
