#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t;
    cin >> t ;

    while(t--) {
        int n;
        cin >> n ;

        vector<int> a(n) ;
        for(int i=0;i<n;i++) {
            cin >> a[i] ;
        }

        int b1 = a[n-1] - a[0] ;
        int b2 = INT_MIN ,b3 = INT_MIN ,b4 = INT_MIN ;

        for(int i=1;i<n;i++) {
            b2 = max(b2,a[i-1]-a[i]) ;
        }

        for(int i=1;i<n;i++) {
            b3 = max(b3,a[i]-a[0]) ;
        }

        for(int i=0;i<n-1;i++) {
            b4 = max(b4,a[n-1]-a[i]) ;
        }

        int maxi1 = max(b1,b2) ;
        int maxi2 = max(b3,b4) ;

        cout << max(maxi1,maxi2) << endl ;

    }
}