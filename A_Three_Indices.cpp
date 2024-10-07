#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int n ;
    cin >> n ;

    vector<int> a(n) ;
    for(int i=0;i<n;i++)
    cin >> a[i] ;

    int b1=INT_MIN,b2,b3 ;
    for(int i=1;i<n-1;i++) {
       if(a[i] > a[i+1] && a[i] > a[i-1]){
        b1 = i ;
        b2 = i-1 ;
        b3 = i+1 ;
       }
    }

    if(b1 != INT_MIN){
        cout << "YES" << endl ;
    cout << b2+1 << " " << b1+1 << " " << b3+1 << endl ;}

    else
    cout << "NO" << endl ;

}

    return 0 ;
}