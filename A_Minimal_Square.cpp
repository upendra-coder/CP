#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int a,b ;
    cin >> a >> b ;

    if(a <= b){
        a = 2*a ;
        if(a > b)
        cout << a*a << endl ;

        else
        cout << b*b << endl ;
    }

    else {
        b = 2*b ;
        if(a > b)
        cout << a*a << endl ;

        else
        cout << b*b << endl ;
    }
}

    return 0 ;
}