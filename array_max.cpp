#include <iostream>

using namespace std;

int main() {
    int a[10];
    int i , sn , max;

    cout << "Enter array elements: ";
    for(i = 0; i < 10; i++) {
        cin >> a[i];
    }

    cout << "Entered elements are: ";
    for(i = 0; i < 10; i++) {
        cout << " " << a[i];
    }

    max = a[0];
    for(i = 1; i < 10; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    cout << "The maximum element in the array is: " << max ;

}