#include <iostream>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;
        if (n == 1) return true;

        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;

        return n == 1;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (sol.isUgly(n)) 
        cout << n << " is an ugly number.\n";
    else 
        cout << n << " is NOT an ugly number.\n";

    return 0;
}

