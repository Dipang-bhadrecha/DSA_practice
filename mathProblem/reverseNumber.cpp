// reverse a number

#include<iostream>
using namespace std;

int reverse(int n) {
  
  int digit,rev=0;
  
  while(n!=0) {
  
    digit = n%10;
    rev = rev*10+digit;
    n =n/10;
  }
   
  return rev;
}

int main () {
  
  int n;
  
  cout<<"Enter number n = ";
  cin>>n;
  
  cout<<reverse(n);

  return 0;
}
