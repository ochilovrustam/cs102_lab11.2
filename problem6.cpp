#include <iostream>
using namespace std;
int countValid(int* arr[], int size) {
int count=0;
 for (int i=0;i<size;i++) {
  if (arr[i]!=nullptr)
   count++;
 }
 return count;
}
int main() {
 int n;
 cout<<"Enter the size of an array: ";
 cin>>n;
 int *arr[100];
 for (int i=0;i<n;i++) {
  int x;
  cin>>x;
  if (x == 0)
   arr[i] = nullptr;
  else
   arr[i] = new int(x); // with the help of chatGPT
 }

 cout<<countValid(arr,n);

}