#include <iostream>
using namespace std;

void sumBackward(int curr, int n, int sum) {
    if (curr > n) {
        cout << sum;
        return;
    }

    sumBackward(curr + 1, n, sum + curr); // work before recursive call
}

int main() {
    int n = 5;
    sumBackward(1, n, 0);
    return 0;
}
