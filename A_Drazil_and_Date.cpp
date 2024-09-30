#include <bits/stdc++.h>
using namespace std ;

int main() {
long long a,b,s ;
cin >> a >> b >> s ;

// if(a+b < s)
// cout << "NO" << endl ;
a = abs(a) ;
b = abs(b) ;

if(s < a+b)
cout << "No" << endl ;

else if((s-(a+b)) % 2 == 0)
cout << "Yes" << endl ;

else 
cout << "No" << endl ;

    return 0 ;
}