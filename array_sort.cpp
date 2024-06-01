#include <iostream>

using namespace std;

int main() {
    int a[10];
    int i, j, sn, temp;

    cout << "Enter array elements: ";
    for(i = 0; i < 10; i++) {
        cin >> a[i];
    }

    cout << "Entered elements are: ";
    for(i = 0; i < 10; i++) {
        cout << " " << a[i];
    }
    cout << endl;

    for(i = 0; i < 10; i++) {
        for(j = i; j < 10; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "Sorted array elements: ";
    for(i = 0; i < 10; i++) {
        cout << " " << a[i];
    }

}