#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;  cin >> t ;

while(t--) {
    int n,k ;  cin >> n >> k ;

    vector<int>a(n+1) ;
    for(int i=1;i<=n;i++) 
    cin >> a[i] ;

    bool res = true ;
    for(int i=2;i<=n;i++) {
        if(a[i] < a[i-1]) {
            res = false ;  break ;
        }
    }

    if(!res && k == 1) cout << "NO" << endl ;
    else cout << "YES" << endl ;
}
    return 0 ;
}