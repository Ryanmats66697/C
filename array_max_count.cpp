#include <iostream>

using namespace std;

int main() {
    int a[10];
    int i, j, sn, temp;
    int maxcount = 0, count = 0, most_frequent;

    cout << "Enter array elements: ";
    for(i = 0; i < 10; i++) {
        cin >> a[i];
    }

    cout << "Entered elements are: ";
    for(i = 0; i < 10; i++) {
        cout << " " << a[i];
    }
    cout << endl;

    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array elements: ";
    for(i = 0; i < 10; i++) {
        cout << " " << a[i];
    }
    cout << endl;

    
    for(i = 0; i < 10; i++) {
        count = 1; 
        for(j = i + 1; j < 10; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }
        if(count > maxcount) {
            maxcount = count;
            most_frequent = a[i];
        }
    }

    cout << "The most frequent element is: " << most_frequent << " with " << maxcount << " occurrences." << endl;
    cout << "Sorted array elements: ";
    for(i = 0; i < 10; i++) {
        cout << " " << a[i];
    }

}