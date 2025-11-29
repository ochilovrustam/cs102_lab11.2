#include <iostream>
using namespace std;

int* findMax(int* arr, int size) {
    int* maxPtr = arr;
    for (int* p = arr; p < arr + size; p++) {
        if (*p > *maxPtr)
            *maxPtr = *p;
    }
    return maxPtr;
}

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    cout << *findMax(arr, n);

    return 0;
}
