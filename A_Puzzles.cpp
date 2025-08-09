#include <bits/stdc++.h>
using namespace std;

bool solve(const vector<int> &a, int n, int mid) {
    for (int i = 0; i + n - 1 < a.size(); i++) {
        if (a[i + n - 1] - a[i] <= mid)
            return true;
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int low = 0, high = a[m - 1] - a[0], ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (solve(a, n, mid)) {
            ans = mid;
            high = mid - 1; 
        } else {
            low = mid + 1; 
        }
    }

    cout << ans << "\n";
}
