#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  
    cin >> t;

    while (t--) {
        long long n, k;  
        cin >> n >> k;
        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<long long> originalA = a;  

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        vector<pair<long long,long long>> pairs;
        for (int i = 0; i < n; i++) {
            pairs.push_back({a[i], b[i]});
        }

        unordered_map<long long, vector<long long>> mp;
        for (auto &p : pairs) {
            mp[p.first].push_back(p.second);
        }

        unordered_map<long long,int> used;

        for (int i = 0; i < n; i++) {
            cout << mp[originalA[i]][used[originalA[i]]] << " ";
            used[originalA[i]]++;
        }
        cout << endl;
    }

    return 0;
}
