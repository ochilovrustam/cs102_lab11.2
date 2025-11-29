#include <iostream>
using namespace std;

void avg(const double* arr, int size, double* result) {
    double sum = 0;
    for (const double* p = arr; p < arr + size; p++)
        sum += *p;
    *result = sum / size;
}

int main() {
    int n;
    cin >> n;
    double arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    double result;
    avg(arr, n, &result);

    cout << result;
    
}
