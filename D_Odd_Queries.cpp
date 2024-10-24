#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ; cin >> t ;

while(t--) {
    long long n,q ;   cin >> n >> q ;

    vector<long long> a(n+1) ;
    vector<long long> pref(n+1) ;
    long long sum = 0 ;
      for(int i=1;i<=n;i++){
            cin >> a[i] ;
            sum += a[i] ;
            pref[i] = sum ;
        }

    while(q--) {
        long long l,r,k;
        cin >> l >> r >> k;
        long long ans = pref[n]-(pref[r]-pref[l-1]) + k*(r-l+1);

        if(ans % 2 == 1) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
}

    return 0 ;
}