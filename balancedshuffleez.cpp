#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<tuple<int, int, char>> a;
    int b = 0;
    for (int i = 0; i < s.length(); ++i) {
        a.push_back(make_tuple(b, -i, s[i]));
        if (s[i] == '(') {
            b++;
        } else {
            b--;
        }
    }
    sort(a.begin(), a.end());
    for (auto x : a) {
        cout << get<2>(x);
    }
    return 0;
}
