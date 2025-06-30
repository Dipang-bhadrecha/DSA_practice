/* print this pattern
1234
123
12
1
*/

#include<iostream>
using namespace std;

void pattern(int N) {
  for(int i=1; i<=N; i++) {
    for(int j=1; j<=N-i+1; j++) {
      cout << j;
    }
    cout << endl;
  }
}

int main() {
  
  int N;
  
  cout << "Enter any number : ";
  cin >> N;
  
  pattern(N);
  
  return 0;
}