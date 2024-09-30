#include <bits/stdc++.h>

using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int n ;
    cin >> n ;
    vector<int> arr(n,0) ;

    for(int i=0;i<n;i++) {
        cin >> arr[i] ;
    }
    
    int a = 0,b=0 ;
    for(int i=0;i<n;i++) {
        if((i%2 == 0 && arr[i]%2 != 0))
        a++ ;

        else if(i%2 == 1 && arr[i]%2 != 1)
        b++ ;
    }

    if(a == b)
    cout << a << endl ;

    else
    cout << "-1" << endl ;
}
    return 0 ;
}