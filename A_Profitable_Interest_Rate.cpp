#include <bits/stdc++.h>
using namespace std ;

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t ;
cin >> t ;

while(t--) {
    long long a,b ;
    cin >> a >> b ;

    if(a > b) 
        cout << a << endl ;

    else {
        long long slow = a ;
        long long fast = b ;
        
        while(true){
          if(slow >= fast) break ;
          if(slow == 0) break ;
          
          slow -= 1 ;
          fast -= 2 ;
        }

        if(slow == fast) cout << slow << endl ;
        else cout << 0 << endl ;
    }
}
    return 0 ;
}


