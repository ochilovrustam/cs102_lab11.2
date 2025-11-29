#include <iostream>
using namespace std;
void swapRef(int &a, int &b) {
    int temp=a;
    a=b;
    b=temp;
}
void swapPtr(int*a, int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
int x=3,y=7;
     int *ptr1=&x,*ptr2=&y;
     swapRef(x,y);
    swapPtr(ptr1, ptr2);

    cout<<x<<" "<<y;

}