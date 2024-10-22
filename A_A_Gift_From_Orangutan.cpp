#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int n ;  cin >> n ;
    vector<int>a(n) ;

    for(int i=0;i<n;i++)
    cin >> a[i] ;

    int mini = INT_MAX ;
    int maxi = INT_MIN ;

    for(int i=0;i<n;i++){
        mini = min(a[i],mini) ;
        maxi = max(a[i],maxi) ;
    }

    cout << (n-1)*(maxi - mini) << endl ;
}

    return 0 ;
}