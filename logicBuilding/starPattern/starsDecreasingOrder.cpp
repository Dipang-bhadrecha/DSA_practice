//this program prints a pattern of stars in decreasing order

#include<iostream>
using namespace std;

void pattern(int N){
  for(int i = N; i >= 1; i--){              
    for(int j = 1; j <= i; j++){ 
      cout<<"*";
    }
    cout<<endl;
  }
}

int main() {

  int N;

  cout << "Enter the number of rows: ";
  cin >> N;

  pattern(N);
  
  return 0;
}