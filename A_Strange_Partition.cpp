#include <bits/stdc++.h>
using namespace std ;

int main() {
int t;
cin >> t ;

while(t--) {
    long long n,x ;
    cin >> n >> x ;
    
    vector<long double> a(n) ;
    for(int i=0;i<n;i++) {
        cin >> a[i] ;
    }
 
    long long maxi = ceil(a[0]/x) ;
    for(int i=1;i<n;i++) {
        maxi += ceil(a[i]/x) ;
        a[i] = a[i]+a[i-1] ;
    }

    long long mini = ceil(a[n-1]/x) ;
    cout << mini << " " << maxi << endl ;
}
    return 0 ;
}