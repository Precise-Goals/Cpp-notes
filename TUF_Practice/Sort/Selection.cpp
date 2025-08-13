#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> arr);
void Sort(vector<int> &arr) {
  int n = arr.size();
  for (int i = 0; i < n - 2; i++) {
    int m = i; // define the minimum index for reference each loop
    for (int j = i + 1; j < n; j++) { // across passes
      if (arr[j] < arr[m]) { // check if j smaller than ref
        m = j; // change j to smaller index
      }
    }
    swap(arr[i], arr[m]); //after each pass shift the n elements
  }
}

int main() {
  vector<int> array = {32, 43, 65, 30, 25};
  printArr(array);
  Sort(array);
  printArr(array);
  return 0;
}

void printArr(vector<int> arr) {
  for (int i : arr) {
    cout << i << " ";
  }
  cout << endl;
}