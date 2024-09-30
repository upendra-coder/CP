#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int x,y,z ;
    cin >> x >> y >> z ;

    if (x == y && z <= x) {
            cout << "YES" << endl;
            cout << x << " " << z << " " << z << endl;
        } 
        else if (x == z && y <= x) {
            cout << "YES" << endl;
            cout << x << " " << y << " " << y << endl;
        } 
        else if (y == z && x <= y) {
            cout << "YES" << endl;
            cout << y << " " << x << " " << x << endl;
        } 
        else {
            cout << "NO" << endl;
        }
}
    return 0 ;
}