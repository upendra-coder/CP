#include <bits/stdc++.h>
using namespace std ;

int main() {
int t;
cin >> t ;

while(t--) {
    int n,k ;
    cin >> n >> k ;

    vector<int> a(n) ;
    int div_2 = 0 ;
    for(int i=0;i<n;i++){
    cin >> a[i] ;
    if(a[i] % 2 == 0)  div_2++ ;
    }

    int ans = INT_MAX ;
    if(k == 4) {
        for(int i=0;i<n;i++) {
        if(a[i] % k == 0){
            ans = 0 ;  break ;
        }
       ans = min(ans,(a[i]/k + 1)*k - a[i]) ;
    }
        
      if(div_2 == 0) cout << min(2,ans) << endl ;
      else if(div_2 == 1)  cout << min(ans,1) << endl ;
      else cout << 0 << endl ;
    }

    else{
    for(int i=0;i<n;i++) {
        if(a[i] % k == 0){
            ans = 0 ;  break ;
        }
       ans = min(ans,(a[i]/k + 1)*k - a[i]) ;
    }
    cout << ans << endl ;}

}
    return 0 ;
}