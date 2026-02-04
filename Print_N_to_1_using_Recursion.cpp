#include <iostream>
using namespace std;

class Solution {
  public:
    void printNumbers(int n) {
        if (n == 0) {
            return;   // base case
        }

        cout << n << endl;   // print first
        printNumbers(n - 1); // recursive call
    }
};

int main() {
    int n;
    cin >> n;

    Solution s;
    s.printNumbers(n);

    return 0;
}
