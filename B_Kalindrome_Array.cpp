#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& a, int val) {
    int i = 0, j = a.size() - 1;
    while (i <= j) {
        if (a[i] == val) { i++; continue; }
        if (a[j] == val) { j--; continue; }
        if (a[i] != a[j]) return false;
        i++; j--;
    }
    return true;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int l = 0, r = n - 1;
        while (l < r && a[l] == a[r]) {
            l++; r--;
        }

        if (l >= r) {
            cout << "YES" << endl;
            continue;
        }

        if (check(a, a[l]) || check(a, a[r])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
