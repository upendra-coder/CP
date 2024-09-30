#include <bits/stdc++.h>
using namespace std ;

int main() {
int n ;
cin >> n ;

cout << (n/5) + (n%5)/4 + (n%5%4)/3 + (n%5%4%3)/2 + (n%5%4%3%2)/1 << endl ;

    return 0 ;
}
