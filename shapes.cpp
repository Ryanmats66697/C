#include <iostream>
using namespace std;

int main() {
    int r, h, b, s, l ;
    char ch;

    cout << "'c' : Area of Circle\n"
         << "'t' : Area of Triangle\n"
         << "'s' : Area of Square\n"
         << "'r' : Area of Rectangle\n";

    cout << "Enter choice: ";
    cin >> ch;

    switch (ch) {
        case 'c':
            cout << "Enter radius: ";
            cin >> r;
            cout << "Area of Circle: " << 3.14 * r * r << endl;
            break;
        case 't':
            cout << "Enter base and height: ";
            cin >> b >> h;
            cout << "Area of Triangle: " << 0.5 * b * h << endl;
            break;
        case 's':
            cout << "Enter side length: ";
            cin >> s;
            cout << "Area of Square: " << s * s << endl;
            break;
        case 'r':
            cout << "Enter length and breadth: ";
            cin >> l >> b;
            cout << "Area of Rectangle: " << l * b << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
