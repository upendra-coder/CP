#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        vector<int> zeros;
        zeros.reserve(n);
        for (int i = 0; i < n; ++i)
            if (s[i] == '0') zeros.push_back(i);

        long long ans = 0;
        int p = 0; 

        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                while (p < (int)zeros.size() && zeros[p] <= i) ++p;
                if (p == (int)zeros.size()) break; 
                int j = zeros[p++]; 
                swap(s[i], s[j]);   
                ans += (long long)(j - i + 1);
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
