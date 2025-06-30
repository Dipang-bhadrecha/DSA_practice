
// Count the number of digits in a number using log10 function

#include<iostream>
#include<math.h>
using namespace std;

int  countDigit(int n) {
  
  int count = floor(log10(n)) + 1;

  return count;
}

int main() {

  int n;
  
  cout<<"enter number n = ";
  cin>>n;
  
  cout<<countDigit(n)<<endl;

  return 0;
} 