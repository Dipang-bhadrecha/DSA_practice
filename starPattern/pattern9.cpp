/* print this start pattern
*    *
**  **
******

*/

#include <iostream>
using namespace std;

void pattern(int N) {
    int totalCols = 2 * N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= totalCols; j++) {
            if (j <= i || j > totalCols - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    pattern(N);
    return 0;
}
