#include <bits/stdc++.h>
using namespace std;

int main() {
int t ;
cin >> t ;

while(t--) {
    int n ;
    cin >> n ;

    vector<int> a(n) ;
    for(int i=0;i<n;i++) {
        cin >> a[i] ;
    }
    if(n == 1){
    cout << a[0] << endl ; 
    continue ;}

    sort(a.begin(),a.end()) ;

    for(int i=1;i<n;i++) {
        a[i] = (a[i-1]+a[i])/2 ;
    }

    cout << a[n-1] << endl ;
}

    return 0 ;
}