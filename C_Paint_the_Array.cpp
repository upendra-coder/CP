#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n;  cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long gcd_even = 0, gcd_odd = 0;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) gcd_even = __gcd(gcd_even, a[i]);
            else gcd_odd  = __gcd(gcd_odd, a[i]);
        }

        bool ok_even = true, ok_odd = true;
        for (int i = 1; i < n; i += 2)
             if (a[i] % gcd_even == 0) ok_even = false;

        for (int i = 0; i < n; i += 2)
             if (a[i] % gcd_odd == 0) ok_odd = false;

        if (ok_even) cout <<  gcd_even << endl;
        else if (ok_odd) cout << gcd_odd << endl;
        else cout << 0 << endl;
}
    return 0;
}
