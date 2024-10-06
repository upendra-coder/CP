#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    long long n ,x ;
    cin >>  n >> x ;

    vector<long long> a(n) ;
    long long maxi = INT_MIN ;
    for(int i=0;i<n;i++) {
        cin >> a[i] ;
        maxi = max(maxi,a[i]) ;
    }
    sort(a.begin(),a.end()) ;
    set<long long> s(a.begin(),a.end()) ;

    if(a[0] != 0){
        cout << 0 << endl ;  continue ;
    }

    else {
        long long numcnt = 0 ;
        int i = 0 ;

        while(i < n-1){
            if(a[i] == a[i+1]){
            s.erase(a[i+1]) ;
            a[i+1] += x ;
            s.insert(a[i+1]) ;
            maxi = max(maxi,a[i+1]) ;
            continue ;}

            if(a[i] == numcnt){
            numcnt++ ;
            i++ ;}

            else 
            break ;
        }

        if(numcnt != maxi)
        cout << numcnt << endl ;

        else{
            cout << numcnt+1 << endl ;
        }
    }

}

    return 0 ;
}