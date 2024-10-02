#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int n,q ;
    cin >> n >> q ;
    vector<int> ans(n) ;

    for(int i=0;i<n;i++) {
        cin >> ans[i] ;
    }
    while(q--) {
        int l,r,k ;
        cin >> l >> r >> k ;

        int sum = 0 ;
        for(int i=0;i<n;i++){
        if(i>=l-1 && i <= r-1)
        sum += k ;
        
        else
        sum += ans[i] ;
    }
        if(sum % 2 != 0)
        cout << "YES" << endl ;

        else 
        cout << "NO" << endl ;
    }
}

    return 0 ;
}