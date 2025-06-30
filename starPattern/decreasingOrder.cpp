//this program prints a pattern of stars in decreasing order

#include<iostream>
using namespace std;

void pattern(int N) {
    for (int i = 1; i <= N; i++) {             
        for (int j = 1; j <= N; j++) {         
            if (j >= N - i + 1)                
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
  int N;
  cout<<"Enter any number : ";
  cin>>N;
  
  pattern(N);
  
  return 0;
}

