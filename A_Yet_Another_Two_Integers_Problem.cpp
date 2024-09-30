#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int a,b ;
    cin >> a >> b ;


    int diff = abs(a-b) ;
    int ans = diff/10 ;
    if(a==b)
    cout << "0" << endl ;

    else if(diff%10 != 0)
    cout << ans + 1 << endl ;

    else 
    cout << ans << endl ;
}

    return 0 ;
}