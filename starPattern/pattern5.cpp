// this program prints a right-angled triangle pattern of stars
/*  output
1
12
123
1234
*/


#include<iostream>
using namespace std;

void pattern(int N) {
  for(int i=1; i<=N; i++) {
    for(int j=1; j<=i; j++) {
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