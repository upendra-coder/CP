#include <bits/stdc++.h>

using namespace std ;
int main() {
int t ;
cin >> t ;

while(t--) {
    int n ; 
    cin >> n ; 

    if(n%2 != 0)
    cout << "NO" << endl ;
    
    else {
        int x = n/2 ;
        if(x % 2 != 0)
        cout << "NO" << endl ;

        else{
            cout << "YES" << endl ;
            
            int p = x ;
            int n = 1 ;
            while(p--) {
                cout << 2*n << " " ;
                n++ ;
            }
            p = x - 1 ;
            n = 0 ;
            while(p--){
                cout << (2*n + 1) << " " ;
                n++ ;
            }
            cout << 3*x - 1 << endl ;
        }
    }
}

    return 0 ;
}