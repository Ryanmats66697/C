#include <iostream>
using namespace std;

int main() {
    int n,pro;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 1; i <= 12; i++) {
        pro=n*i;
        cout << pro ;
        cout << "\n";
    }

    return 0;
}