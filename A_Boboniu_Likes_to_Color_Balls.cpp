#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int r,g,b,w ;
    cin >> r >> g >> b >> w ;

    if(r%2 == 0 && g%2==0 && b%2 == 0 && w%2==0){
        cout << "Yes" << endl ;
        continue ;
    }

    int val = min(r,min(g,b)) ;
    r = r-val ;    g = g-val ;     b=b-val ;     w = w+3*val ;

    if((r%2 == 0 && g%2==0 && b%2 == 0 && w%2!=0) || (r%2 == 0 && g%2==0 && b%2 != 0 && w%2==0) ||
     (r%2 == 0 && g%2!=0 && b%2 == 0 && w%2==0) || (r%2 != 0 && g%2==0 && b%2 == 0 && w%2==0))
     cout << "Yes" << endl ;

     else 
     cout << "No" << endl ;

}

    return 0 ;
}