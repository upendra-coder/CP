#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  
    cin >> t;

    while (t--) {
        int n;  
        cin >> n;
        vector<long long> a(n);
        map<long long, vector<int>> pos; 

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pos[a[i]].push_back(i + 1); 
        }

        bool possible = true;
        for (auto &p : pos) {
            if (p.second.size() == 1) { 
                possible = false;
                break;
            }
        }

        if (!possible) {
            cout << -1 << endl;
            continue;
        }

        vector<int> ans(n + 1);

        for (auto &p : pos) {
            auto &vec = p.second;
            int m = vec.size();
            for (int i = 0; i < m; i++) {
                int nxt = (i + 1) % m;
                ans[vec[i]] = vec[nxt];
            }
        }

        for (int i = 1; i <= n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
