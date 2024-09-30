#include <bits/stdc++.h>
using namespace std ;

int main() {
long long n,m,a ;
cin >> n >> m >> a ;

if(n%a != 0) n = n/a + 1;
else n = n/a  ;

if(m%a != 0) m = m/a + 1 ;
else m = m/a ;

long long ans = n*m ;
cout << ans << endl ;

    return 0 ;
} 