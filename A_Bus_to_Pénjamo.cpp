#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ; 
cin >> t ;

while(t--) {
    int n,r ;
    cin >> n >> r ;

    int rem = 0 ;
    int happy = 0 ;
    vector<int>a(n) ;
    for(int i=0;i<n;i++)
    cin >> a[i] ;

    for(int i=0;i<n;i++) {
        happy += 2*(a[i]/2) ;
        r -= a[i]/2 ;
        rem += a[i]%2 ;
    }

    int left = rem;
    r -= rem/2 ;
    rem %= 2 ;
    
    if(rem != 0){ 
    r -- ; left-- ;
    happy++ ;}

    cout << happy + min(2*r,left) << endl ;
}
    return 0 ;
}