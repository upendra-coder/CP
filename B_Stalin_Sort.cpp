#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin >> a[i];
        int best = 0;

        for (int i=0; i<n; i++) {
            int curr = 0;
            for (int j=i; j<n; j++) {
                if (a[j] <= a[i]) {
                    curr++;
                }
            }
            best = max(best, curr);
        }
        cout << n - best << endl;
    }
  return 0;
}