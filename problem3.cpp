#include <iostream>
using namespace std;
void setToHundred(int* *p) {
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "&p = " << &p << endl;
    cout << "&*p = " << &*p << endl;
}
int main() {
    int x = 5;
    //cin >>x;
    int *px = &x;
    setToHundred(&px);
     cout << "&px: " << &px << endl;
     cout << "px: " << px << endl;
     cout << "&x: " << &x << endl;
    cout <<x<< endl;
    return 0;
}