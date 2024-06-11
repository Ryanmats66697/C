#include <iostream>

class Area {
public:
    void circle(int r) {
        std::cout << 3.14*r*r << std::endl;
    }

    void rectangle(int h, int b) {
        std::cout << h*b<< std::endl;
    }

    void square(int s) {
        std::cout << s*s << std::endl;
    }
};

int main() {
    Area o1;
    o1.circle(5);
    o1.rectangle(12 , 15);  
    o1.square(10);     

    return 0;
}
