#include <iostream>
using namespace std;

int main() {
    int f,n,i;
    cout<<"Enter a number";
    cin>>n;
    f=1;
    for(int i = 1; i <= n; ++i) {
        f=f*i;
    }

    cout<<"Factorial: "<<f;
}
