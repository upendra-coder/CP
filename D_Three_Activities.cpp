#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];

        vector<pair<int, int>> topA, topB, topC;
        for (int i = 0; i < n; i++) topA.push_back({a[i], i});
        for (int i = 0; i < n; i++) topB.push_back({b[i], i});
        for (int i = 0; i < n; i++) topC.push_back({c[i], i});
        sort(topA.rbegin(), topA.rend());
        sort(topB.rbegin(), topB.rend());
        sort(topC.rbegin(), topC.rend());

        int ans = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    int x = topA[i].second;
                    int y = topB[j].second;
                    int z = topC[k].second;
                    if (x != y && y != z && x != z) {
                        ans = max(ans, topA[i].first + topB[j].first + topC[k].first);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
