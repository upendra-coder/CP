#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    long long a,b,n ;
    cin >> a >> b >> n;

    vector<long long> ans(n) ;
    for(int i=0;i<n;i++) {
        cin >> ans[i] ;
    }

    sort(ans.begin(),ans.end()) ;
    long long time = 1 ;
    long long c = b ;
    long long i = 0 ;
    while(i < n){
    
       if(c == 1){
       c += min(a,c+ans[i]) ;
       i++ ;}
       c-- ;
       time++ ;
    }

    cout << time+1 << endl ;
}
    return 0; 
}