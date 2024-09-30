#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    long long x,y,n ;
    cin >> x >> y >> n ;

    if(n % x == 0){
        cout << n << endl ;
        break ;
    }

    while(n%x != y){
    n-- ;
    }
    cout << n << endl ;
}
    return 0 ;
}