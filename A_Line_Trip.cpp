#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ; cin >> t ;

while(t--) {
    int n,x ;  cin >> n >> x ;
    vector<int>a(n) ;
    for(int i=0;i<n;i++)
    cin >> a[i] ;

    if(n == 1){
        cout << max(a[0],2*(x-a[0])) << endl ;
        continue ;
    }

    int ans = INT_MIN ;
    for(int i=1;i<n;i++) {
        ans = max(a[i]-a[i-1],ans) ;
    }
    cout << max(ans, max(a[0], 2 * (x - a[n - 1]))) << endl ; 
}
    return 0 ;
}