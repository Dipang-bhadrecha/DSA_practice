// count the number of digits in a number

#include<iostream>
using namespace std;

int countDigitNumber(int n) {
  
  int count = 0;
  
  if (n==0) return 1;
  while(n!=0) {
  
    n = n/10;
    count ++;
  }
  return count;
}

int main() {

  int n;
  
  cout<<"enter number n ";
  cin>> n;
    
  cout<< countDigitNumber(n)<<endl;
  
  return 0;
}