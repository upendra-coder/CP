#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    long long n ; 
    cin >> n ;
 
    if(n >= 15 && (n % 14 >= 1 && n % 14 <= 6))
    cout << "YES" << endl ;

    else 
    cout << "NO" << endl ;
}

    return 0 ;
}