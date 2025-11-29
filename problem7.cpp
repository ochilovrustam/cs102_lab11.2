#include <iostream>
using namespace std;
void fixNeg(int* arr, int size) {
    for (int i=0;i<size;i++){
        if (*arr<0)
            *arr=0;
        arr++;
    }
}

int main() {
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[100];
    for (int i=0;i<n;i++) {
     cin>>arr[i];
    }
    fixNeg(arr,n);
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}