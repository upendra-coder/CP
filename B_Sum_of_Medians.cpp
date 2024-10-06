#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int n,k ;
    cin >> n >> k ;

    vector<long long> a(n*k) ;
    int max_median = 0 ;
    for(int i=0;i<n*k;i++) {
        cin >> a[i] ;
    }

        long long sum = 0;
        int index = n*k - n/2 - 1 ;
        while(k--) {
            sum += a[index] ;
            index = index - (n/2) - 1;
        }
        cout << sum << endl ;
}

    return 0 ;
}