#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    long long l1,l2,r1,r2 ;
    cin >> l1 >> r1 ;
    cin >> l2 >> r2 ;

    long long L = max(l1,l2) , R = min(r1,r2) ;

    if(R<L){
        cout << 1 << endl ;
        continue ;
    }

    long long ans = R-L ;
    if(l1<L || l2 < L)
    ans++ ;
    if(r1>R || r2>R)
    ans++ ;

    cout << ans << endl ;
}
  return 0 ;
}