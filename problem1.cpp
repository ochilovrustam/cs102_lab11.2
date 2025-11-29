#include <iostream>
using namespace std;
void normal(char *p) {
    if (*p>=97 && *p<=122) {
        *p=*p-32;
    }
    p++;
    while (*p!='\0') {
        if (*p>=65 && *p<=90){
            *p=*p+32;
        }
        p++;
    }
}
int main() {
    string word;
    cout<<"Input: ";
    cin>>word;
    char *ptr = &word[0];

    normal(ptr);
    cout<< "Output: "<< word;

}