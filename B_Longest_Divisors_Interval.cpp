#include <bits/stdc++.h>
#define ll long long
using namespace std ;

vector<ll> findDivisors(ll n) {
    vector<ll> divisors;
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors ;
}

int main() {
int t;
cin >> t ;

while(t--) {
    ll n ;
    cin >> n ;

    vector<ll> divisors = findDivisors(n) ;

    int len = 1 ;
    int size = divisors.size() ;
    int max_len = 1 ;

   for(ll i=1;i<size;i++) {
    if(divisors[i] - divisors[i-1] == 1)
    len++ ;

    else{
        max_len = max(max_len,len) ;
        len = 1 ;
    }
   }

    max_len = max(max_len,len) ;
    cout << max_len << endl ;
}

    return 0 ;
}