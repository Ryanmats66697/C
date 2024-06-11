#include <iostream>

class add {
public:
    void addInt(int a, int b) {
        std::cout << a + b << std::endl;
    }

    void addFloat(float x, float y) {
        std::cout << x + y << std::endl;
    }

    void addMixed(int p, float q) {
        std::cout << p + q << std::endl;
    }
};

int main() {
    add o1;
    o1.addInt(5, 6);
    o1.addFloat(6.4f, 9.2f);  
    o1.addMixed(10, 4.3f);     

    return 0;
}
