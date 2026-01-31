#include <iostream>
using namespace std;

int sumForward(int n) {
    if (n == 0)
        return 0;

    return n + sumForward(n - 1); // work after recursive call
}

int main() {
    int n = 5;
    cout << sumForward(n);
    return 0;
}
