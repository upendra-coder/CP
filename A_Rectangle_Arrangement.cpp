#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ; cin >> t ;

while(t--) {
    int n ;   cin >> n ;
    int max_width = INT_MIN ;
    int max_height = INT_MIN ;

    vector<pair<int,int>>a(n) ;
    for(int i=0;i<n;i++){
       cin >> a[i].first ;
       cin >> a[i].second ;

       max_width = max(max_width,a[i].first) ;
       max_height = max(max_height,a[i].second) ;
    }

    cout << 2*(max_height) + 2*(max_width) << endl ;
}
    return 0;
}