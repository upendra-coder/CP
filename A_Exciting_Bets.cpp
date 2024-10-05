#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    long long a,b ;
    cin >> a >> b ;

    if(a == b)
    cout << 0 << " " << 0 << endl ;

    else {
        long long maxgcd = abs(a-b) ;
        cout << maxgcd << " " ;

        long long ans1 = a%maxgcd ;
        long long ans2 = maxgcd-a%maxgcd ;
        cout << min(ans1,ans2) << endl ;
    }
}

    return 0 ;
}
