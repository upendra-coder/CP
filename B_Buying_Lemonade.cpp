#include <bits/stdc++.h>
using namespace std ;

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t ;
cin >> t ;

while(t--) {
    long long n,k ;
    cin >> n >> k ;

    vector<long long>a(n) ;
    for(int i=0;i<n;i++)
    cin >> a[i] ;


    sort(a.begin(),a.end()) ;
    if(k <= n) cout << k << endl;

    else {
      long long click = 0 ;
      long long lemonade_tobuy = k ;
      long long cnt = n ;

      for(int i=0;i<n;i++) {
        if(a[i] * cnt >= lemonade_tobuy) break ;

        click += (a[i] + 1) ;
        lemonade_tobuy -= a[i] ;
        cnt-- ;
      }
      cout << click + lemonade_tobuy << endl ;
    }
}
    return 0 ;
}