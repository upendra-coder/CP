#include <bits/stdc++.h>
using namespace std ;

int main() {
string n ;
cin >> n ;

string n2 = n;
reverse(n2.begin(),n2.end()) ;
string ans = n + n2 ;

cout << ans << endl ;


    return 0 ;
}