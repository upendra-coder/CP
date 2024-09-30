#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int n,x;
    cin >> n >> x ;

    if(n == 1 || n == 2)
    cout << "1" << endl ;

    else if((n-2)%x == 0)
    cout << 1 + (n-2)/x << endl ;

    else
    cout << 2 + (n-2)/x << endl ;
}
    return 0 ;
}