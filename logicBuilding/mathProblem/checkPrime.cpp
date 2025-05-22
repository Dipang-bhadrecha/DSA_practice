// check prime or not 

#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(int n) {
  
  if(n<=1) return false;
  if(n == 2) return true;
  
  for(int i=2; i<sqrt(n); i++) {
    if(n%i==0) return false;
  }
  return true;
}

int main() {
  
  int n;
  
  cout<<"Enter any number n = ";
  cin>>n;
  
  if(checkPrime(n)) cout<<"Prime Number";
  else cout<<"Not a prime number";

  return 0;
}