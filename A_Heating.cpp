#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
int c,k ;
cin >> c >> k ;

int x = k/c ;
int r = k%c ;

int cost = r*(x+1)*(x+1) + (c-r)*x*x ;
cout << cost << endl ;
  }
}