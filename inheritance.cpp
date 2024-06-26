#include <iostream>

class base {
public:
    int x;
};

class c1: public base {
public:
    int y;
};

class c2: public base {
public:
    int z; // Added z to c2
};

class derived: public c1, public c2 { // Corrected inheritance syntax
public:
    int sum;
};

int main() { // Corrected return type to int
    derived o1;
    o1.c1::x = 5;
    o1.y = 10;
    o1.z = 15; // Added z definition
    o1.sum = o1.c1::x + o1.y + o1.z;
    std::cout << "Sum = " << o1.sum;
    return 0; // Added return statement
}
