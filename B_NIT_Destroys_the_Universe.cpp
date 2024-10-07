#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int n;
    cin >> n ;

    vector<int> a(n) ;
    for(int i=0;i<n;i++){
    cin >> a[i] ;
    }

    int partition = 0 ;
    if(a[0] != 0)
    partition = 1 ;
    
    for(int i=0;i<n-1;i++) {
        if(a[i] == a[i+1])
        continue ;

        if(a[i] == 0){
        partition++ ;}
    }

    if(partition >= 2)
    cout << 2 << endl ;

    else
    cout << partition << endl ;

}

    return 0;
}