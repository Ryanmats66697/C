#include <iostream>
using namespace std;

int main() {
    int x,y,ans;
    ans=1;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Number raised to:";
    cin>>y;
    for(int i = 1; i <= y; i++) {
        ans=ans*x;
    }
    cout<<ans;
        
}