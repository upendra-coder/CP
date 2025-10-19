#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long ans = 1;
        for (int i = n - 1; i >= 0; i--) {
            int cnt = a.end() - upper_bound(a.begin(), a.end(), b[i]);
            int ways = cnt - (n - 1 - i);
            if (ways <= 0) { ans = 0; break; }

            ans = (ans * ways) % MOD;
        }

        cout << ans << endl;
    }
    return 0;
}
