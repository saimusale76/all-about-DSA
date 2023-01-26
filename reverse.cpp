
#include<iostream>
using namespace std;



int main() {
  //create array
  
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  
  //two pointer approach
  int start = 0;
  int end = n - 1;
  while (start <= end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
  
  //output
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}