#include <bits/stdc++.h>
using namespace std ;

int main() {
int t;
cin >> t ;

while(t--) {
long long n;
cin >> n ;

 if (n % 2 != 0 || n < 4) {
    cout << -1 << endl;
    continue;
}
long long maxi = n/4 ;
long long mini ;

if(n%6 == 0)
    mini = n/6 ;
else
mini = n/6+1 ;

cout << mini << " " << maxi << endl ;

}
    return 0;
}