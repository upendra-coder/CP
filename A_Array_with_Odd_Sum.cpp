#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t;
cin >> t ;

while(t--) {
    int n ;
    cin >> n ;
    vector<int> ans(n,0) ;

    for(int i=0;i<n;i++) {
        int num ;
        cin >> num ;
        ans[i] = num ;
    }

    int oddCount = 0;
    for(int i=0;i<n;i++) {
        if(ans[i] % 2 != 0)
        oddCount ++ ;
    }
    
    if(oddCount == 0)
    cout << "NO" << endl ;

    else if((n%2 == 0 && oddCount %2 == 0 && oddCount < n) || (n%2 == 0 && oddCount %2 != 0) || (n%2 != 0 && oddCount %2 == 0 && oddCount < n) 
    || (n%2 != 0 && oddCount %2 != 0))
    cout << "YES" << endl ;

    else 
    cout << "NO" << endl ;
}
    return 0 ;
}