#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ; 
cin >> t;

while(t--) {
    string s,t ;
    cin >> s >> t ;

    int cnt = 0 ;
    int i = 0 ;
    while(s[i] == t[i] && i < min(s.length(),t.length())) {
        cnt++ ;
        i++ ;
    }

    if(cnt != 0) cout << s.length() + t.length() - cnt + 1 << endl ;
    else cout << s.length() + t.length() << endl ;
}
    return 0 ;
}