#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<vector<int>> dp(18, vector<int>(m));
    for (auto &x : v)
        cin >> x;
    for (int &x : dp[0])
        cin >> x;

    for (int i = 1; (1 << i) <= m; i++) {
        for (int j = 0; j + (1 << i) <= m; j++) {
            dp[i][j] = min(dp[i - 1][j], dp[i - 1][j + (1 << (i - 1))]);
        }
    }

    auto query = [&](int l, int r) {
        int msk = __lg(r - l + 1);
        return min(dp[msk][l], dp[msk][r - (1 << msk) + 1]);
    };

    for (int i = 0; i < n; i++) {
        int l = 0, cur = v[i];
        do {
            int p = l, r = m - 1, md, ans = m;
            while (l <= r) {
                md = (r + l) / 2;
                if (query(p, md) <= cur)
                    r = md - 1, ans = md;
                else
                    l = md + 1;
            }
            if (ans == m)
                break;
            cur %= dp[0][ans];
            l = ans + 1;
        } while (l < m);
        cout << cur << " ";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
