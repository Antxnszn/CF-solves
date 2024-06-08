#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long o;
    cin >> o;
    vector<long long> vector1(o);
    vector<long long> vector2(o);
    
    for (long long n = 0; n < o; ++n) {
        cin >> vector1[n];
    }
    for (long long m = 0; m < o; ++m) {
        cin >> vector2[m];
    }
    
    long long big;
    long long sum1 = vector1[0];
    long long sum2 = vector2[0];
    long long little = sum2 / sum1;
    
    for (long long p = 1; p < o; ++p) {
        sum1 += vector1[p];
        sum2 += vector2[p];
        big = sum2 / sum1;
        if (big < little) {
            little = big;
        }
    }
    
    cout << little << endl;
    
    return 0;
}
