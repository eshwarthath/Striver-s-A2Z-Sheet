#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 3, 3};

    int c = count(v.begin(), v.end(), 3);

    cout << "3 appears " << c << " times";

    return 0;
}
