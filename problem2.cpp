#include <iostream>
using namespace std;
void normal(char *p) {
    int countUp=0;
    int countlower=0;
    while (*p!='\0') {
        if (*p>=65 && *p<=90){
            countUp++;
        }
        else
            countlower++;
        p++;
    }
    cout<<"Upper= "<<countUp<<endl<<"Lower= "<<countlower;
}
int main() {
    string word;
    cout<<"Input: ";
    cin>>word;
    char *ptr = &word[0];

    normal(ptr);


}