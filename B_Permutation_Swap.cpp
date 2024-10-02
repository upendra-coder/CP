#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int n;
    cin >> n;

    vector<int> ans(n) ;
    for(int i=0;i<n;i++) {
        cin >> ans[i] ;
    }

    int res = 0;
    for(int i=0;i<n;i++) {
        res = __gcd(res,abs(ans[i]-i-1)) ;
    }

    cout << res << endl ;
}
    return 0 ;
}