#include <bits/stdc++.h>
using namespace std ;

int main() {
int t;
cin >> t ;

while(t--) {
    long long n;
    cin >> n ;
    int op = 0 ;

    if(n == 1){
        cout << 0 << endl ;
        continue ;
    }

    while(true) {
        if(n%3 != 0)
        break ;

        if(n%6 == 0){
        n /= 6 ;
        op++ ;}

        else{
            n *= 2 ;
            op++ ;
        }
    }

    if(n != 1)
    cout << -1 << endl ;

    else 
    cout << op << endl ;
}

    return 0;
}