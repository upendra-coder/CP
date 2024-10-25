#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;  cin >> t ;

while(t--) {
    int n ;  cin >> n ;

    vector<int>a(n) ;
    for(int i=0;i<n;i++)
    cin >> a[i] ;

    vector<long long>suffix(n+1);
    for(int i=n-1;i>=0;i--) {
        suffix[i] = suffix[i+1] + a[i] ;
    }

     long long ans = suffix[0];
        for(int i = 1;i < n;i++){
            if(suffix[i] > 0){
                ans += suffix[i];
            }
        }
        cout << ans << endl ;
}
    return 0 ;
}