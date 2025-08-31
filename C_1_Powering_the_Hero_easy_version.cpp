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

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        priority_queue<int> pq;  
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                pq.push(a[i]); 
            } else { 
                if (!pq.empty()) {
                    ans += pq.top();
                    pq.pop();
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
