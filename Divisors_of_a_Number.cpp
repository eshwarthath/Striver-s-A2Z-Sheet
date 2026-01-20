#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> divisors_n;
        for(int i = 1; i <=n; i++){
                if (n%i == 0){
                    divisors_n.push_back(i);
                }
        }
        return divisors_n;
    }
};

int main(){
    int n;
    cin>>n;
    Solution s;
    vector<int> result = s.divisors(n);
    for(int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
    return 0;
}#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> divisors_n;
        for(int i = 1; i <=n; i++){
                if (n%i == 0){
                    divisors_n.push_back(i);
                }
        }
        return divisors_n;
    }
};

int main(){
    int n;
    cin>>n;
    Solution s;
    vector<int> result = s.divisors(n);
    for(int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
    return 0;
}
