#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int n ;
    cin >> n ;
    vector<int> ans(n) ;

    for(int i=0;i<n;i++) {
        cin >> ans[i] ;
    }

    int maxi = INT_MIN ;
    int index = -1 ;

    for(int i=0;i<n;i++) {
    if(ans[i] > maxi) {
        index = i ;
        maxi = ans[i] ;
    }
}

if(n%2 == 0)
cout << maxi + n/2 << endl ;

else {
    if(index % 2 == 0)
    cout << maxi + n/2 + 1 << endl ;

    else
    cout << maxi + n/2 << endl ;}
    
}
    return 0 ;
}