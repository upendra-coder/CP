#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t ; cin >> t ;

    while(t--) {
        int n ; cin >> n ;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        unordered_map<int, int> mp;
        mp[0] = 1;
        int prefixsum = 0;
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            prefixsum += a[i];
            if(mp[prefixsum]) {
                cnt++;
                mp.clear();
                mp[0] = 1;
                prefixsum = 0;
            }
            else mp[prefixsum]++;
        }
        cout << cnt << endl;
    }
    return 0;
}
