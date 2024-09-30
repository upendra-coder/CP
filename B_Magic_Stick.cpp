#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int x,y ;
    cin >> x >> y ;

    if(y <= x)
    cout << "YES" << endl ;
    else if(x == 1)
    cout << "NO" << endl ;
    else if (x == 2 || x == 3) {
            if (y == 3 || (x == 2 && y == 1)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
 }

    return 0 ;
}