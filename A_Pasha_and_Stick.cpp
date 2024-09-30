#include <bits/stdc++.h>
using namespace std ;

int main() {
int n ;
cin >> n ;

if(n%2 != 0)
cout << 0 << endl ;

else{
int x = n/2 ;
if(x%2 == 0)
cout << x/2 - 1 << endl ;

else
cout << x/2 << endl ;}

    return 0 ;
}