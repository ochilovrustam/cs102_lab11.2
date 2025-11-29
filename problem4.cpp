#include <iostream>
using namespace std;

void setToHundred(int**p) {
 **p=100;

}
int main() {
int a=5;
    int *ptr=&a;
    setToHundred(&ptr);
    cout<<a;

}