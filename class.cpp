#include <iostream>
#include <cstring>

class student {
    int rollno;
    char sname[20], sadd[20];

public:
    void get() {
        std::cout << "Enter student details (roll number, name, address): ";
        std::cin >> rollno;
        std::cin.ignore(); 
        std::cin.getline(sname, 20);
        std::cin.getline(sadd, 20);
    }

    void display() {
        std::cout << "Student Information:\n";
        std::cout << "Roll Number: " << rollno << "\n";
        std::cout << "Name: " << sname << "\n";
        std::cout << "Address: " << sadd << "\n";
    }
};

int main() {
    student s;
    s.get();
    s.display();
    return 0;
}