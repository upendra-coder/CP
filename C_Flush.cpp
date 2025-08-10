// brute force
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// int n,q;  cin >> n >> q;
// vector<int> a(n),query(q);
// int sum = 0;
// for(int i=0;i<n;i++){ cin >> a[i];  sum += a[i];}
// for(int i=0;i<q;i++) cin >> query[i];
// sort(a.begin(),a.end());

// for(int i=0;i<q;i++){
// int b = query[i];
// int ans = 0;
// for(int i=0;i<n;i++){
//     if(a[i] >= b) ans += (b-1);
//     else ans += a[i];
// }
// ans += 1;
// if(ans > sum) cout << -1 << endl;
// else cout << ans << endl;
// }
//     return 0;
// }


//optimal
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n), query(q);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < q; i++) cin >> query[i];
    sort(a.begin(), a.end());

    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + a[i];
    }

    for (int b : query) {
        int pos = lower_bound(a.begin(), a.end(), b) - a.begin();
        long long ans = prefix[pos] + 1LL * (n - pos) * (b - 1);
        ans += 1;
        if (ans > sum) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}
