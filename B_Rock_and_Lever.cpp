#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<long long> cnt(32, 0);
        for(int i = 0; i < n; i++) {
            int x = a[i];
            int msb = 0;

            while(x > 1) {
                x /= 2;
                msb++;
            }

            cnt[msb]++;
        }

        long long ans = 0;
        for(int i = 0; i < 32; i++) {
            long long c = cnt[i];
            ans += c * (c - 1) / 2;
        }

        cout << ans << endl;
    }

    return 0;
}
