/* print this pattern
1
22
333
*/

#include<iostream>
using namespace std;

void pattern(int N) {
  for(int i=1; i<=N; i++) {
    for(int j=1; j<=i; j++) {
      cout << i;
    }
    cout << endl;
  }
}

int main() {
  
  int N;
  
  cout << "Enter any number: ";
  cin >> N;
  
  pattern(N);
  
  return 0;
}