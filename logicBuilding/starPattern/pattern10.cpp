/* Print this pattern

   *
  ***
 *****
*******


*/

#include <iostream>
using namespace std;

void pyramidPattern(int N) {
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter N : ";
    cin >> N;
    pyramidPattern(N);
    return 0;
}
