#include <bits/stdc++.h>
using namespace std;

int digit_diff(int x) {
    int maxi = 0, mini = 9;
    while (x > 0) {
        int d = x % 10;
        maxi = max(maxi, d);
        mini = min(mini, d);
        x /= 10;
    }
    return maxi - mini;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int best_num = l;
        int best_diff = -1;

        for (int i = r; i >= l; i--) {
            int diff = digit_diff(i);
            if (diff > best_diff) {
                best_diff = diff;
                best_num = i;
            }
            if (best_diff == 9) break;
        }
        cout << best_num << endl;
    }
    return 0;
}
