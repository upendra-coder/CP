#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ; cin >> t ;

while(t--) {
    int n ; cin >> n ;
    string s ;  cin >> s ;

    int empty = 0, adj = 0 ;
    for(int j=0;j<n;j++){
        if(s[j] == '.')empty++ ;
    }

    for(int i=1;i<n-1;i++) {
        if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.'){
            adj = 1 ;  break ;
        }
    }

    if(adj) cout << 2 << endl ;
    else cout << empty << endl ;
}
    return 0 ;
}