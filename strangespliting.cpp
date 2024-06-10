#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (a[0] == a[n-1]) {
            cout << "NO\n";
            continue;
        }

        // Try to find a valid split point
        bool found = false;
        for (int k = 1; k < n; ++k) {
            int red_min = a[0];
            int red_max = a[k - 1];
            int blue_min = a[k];
            int blue_max = a[n - 1];

            int red_range = red_max - red_min;
            int blue_range = blue_max - blue_min;

            if (red_range != blue_range) {
                found = true;
                cout << "YES\n";
                string s(n, 'B');
                for (int i = 0; i < k; ++i) {
                    s[i] = 'R';
                }
                cout << s << '\n';
                break;
            }
        }

        if (!found) {
            cout << "NO\n";
        }
    }
    return 0;
}
