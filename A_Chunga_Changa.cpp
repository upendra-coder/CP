#include <bits/stdc++.h>
using namespace std ;

int main() {
long long x , y, z ;
cin >> x >> y >> z ;

long long ans = x/z + y/z + (x%z + y%z)/z ;
cout << ans << " " ;

if(x%z + y%z >= z)
cout << min(z-x%z,z-y%z);

else cout << "0" ;
    return 0 ;
}