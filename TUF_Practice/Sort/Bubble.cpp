#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> arr);

void Sort(vector<int> &arr) {
  int n = arr.size();
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
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