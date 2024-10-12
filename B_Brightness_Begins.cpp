#include <bits/stdc++.h>
using namespace std ;

bool isPerfectSquare(long long n)
{
    long long sr = sqrt(n);
    if (sr * sr == n)
        return true;
    else
        return false;
}

int main() {
int t;
cin >> t ;

while(t--) {
    long long k ;
    cin >> k;
   
    if(!isPerfectSquare(k))
    cout << k + (long long)(sqrt(k)) + 1 << endl ;

    else cout << k + sqrt(k) << endl ;
}
    return 0 ;
}