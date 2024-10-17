#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int n , x ;
    cin >> n >> x ;

    vector<long long>a(n) ;
    long long maxi = LLONG_MIN ;
    long long sum = 0 ;
    for(int i=0;i<n;i++){
        cin >> a[i] ;
        maxi = max(maxi,a[i]) ;
        sum += a[i] ;
        }

        if(sum%x == 0) cout << max(maxi,sum/x) << endl ;
        else cout << max(maxi,(sum/x)+1) << endl ;
}
    return 0 ;
}

