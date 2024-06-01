#include <iostream>

using namespace std;

int main() {
    int a[10];
    int i , sn;

    cout << "Enter array elements: ";
    for(i = 0; i < 10; i++) {
        cin >> a[i];
    }

    cout << "Entered elements are: ";
    for(i = 0; i < 10; i++) {
        cout << " " << a[i];
    }

    cout<<"Enter search element:";
    cin>>sn;

   for(i = 0; i < 10; i++) {
        if(a[i] == sn) {
            cout << "The element found is :" << i ;
        }
    }

}