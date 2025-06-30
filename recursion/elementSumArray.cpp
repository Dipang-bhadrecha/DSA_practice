// this program is sum of element in array 

// sum of element in array

#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size) {

  int sum = 0;
  
  for(int i=0; i<size; i++) {
    sum+=arr[i];
  }
  return sum;
}

int main() {
  
  int n;
  
  cout << "Enter the size of an array = ";
  cin>> n;
  
  int arr[n];
  
  cout<<"Enter" << n << "element: \n";
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }
  
  int result = sumOfArray(arr, n);
  
  cout << "Sum of array elements: " << result << endl;
  
  return 0;
  
}