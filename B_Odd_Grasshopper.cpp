#include <bits/stdc++.h>
using namespace std ;

int main() {
int t;
cin >> t ;

while(t--) {
    long long ic,jump ;
    cin >> ic >> jump ;

   
    int rem = jump%4 ;
    int i = 4*(jump/4) + 1 ;

    while(rem--) {
        cout << "ic" <<" " << ic << endl;
        if(ic % 2 == 0)
            ic -= i ;
        
        else
            ic += i ;
        
        i++ ;
    }

    cout << ic << endl ;
}
    return 0 ;
}