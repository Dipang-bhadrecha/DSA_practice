#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    
int countPrimes(int n) {
  
  if(n<=2) return 0;
  
  vector<bool> isPrime(n ,true); //here is the isPrime is a vector function name and vector is a data type like we create an array with name similar here we create vector with data type bool named with isPrime giving two variable n and true n is a variable and true is a data of that n and then 
  isPrime[0] = false;
  isPrime[1] = false;
  
  for(int i=2; i*i<=n; i++) { 
    if(isPrime[i]) { // isPrime[i] i =2 isPrime[2] this is a first layer of checking after checked with the i*i<=n 4<=10 then 9<=10 then 4 will not pass because 16>=10 condition is false here
      for(int j=i*i; j<n; j+=i) {
        isPrime[j] = false;
      }
    }
  }
  
  int count = 0;
  for(int i=2; i<n; i++) {
    if(isPrime[i]){
      count++;
    } 
  }
  return count;
  
  }
};


int main() {
    Solution sol;  // create object of Solution for accessing a vector isPrime data from public class and assign with result other wise we need to crate a return function for return a count number right? this is a Solution class 

    int n;
    cout << "Enter n: ";
    cin >> n;  // take input from user

    int result = sol.countPrimes(n); // countPrimes(n) this is store a total number of count prime number here from return count 
    
    cout << "Number of primes less than " << n << " = " << result << endl;

    return 0;
}
