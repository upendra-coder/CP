#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  
    cin >> t;

    while(t--) {
        int n;  
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int i = 0, j = n - 1;
        long long p1 = a[0], p2 = a[n-1];
        int ans = 0;

        while(i < j) {
            if(p1 == p2){
                ans = max(ans, i + (n + 1 - j));
            }
            if(p1 <= p2){
                i++;
                p1 += a[i];
            } else {
                j--;
                p2 += a[j];
            }
    }
        cout << ans << endl;
}
    return 0;
}
