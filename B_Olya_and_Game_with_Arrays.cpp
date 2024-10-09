#include <bits/stdc++.h>
using namespace std ;

int main() {
int t;
cin >> t ;

while(t--) {
    long long beauty = 0 ;
    int n ;
    cin >> n ;
        vector<long long>first_min ;
        vector<long long>second_min ;

    for(int i=0;i<n;i++) {
        long long m ;
        cin >> m ;
        vector<long long> b(m) ;
        for(long long j=0;j<m;j++) {
            cin >> b[j] ;
        }

        sort(b.begin(),b.end()) ;
        first_min.push_back(b[0]) ;
        second_min.push_back(b[1]) ;
    }

     sort(first_min.begin(),first_min.end()) ;
     sort(second_min.begin(),second_min.end()) ;
    long long mini1 = second_min[0] ;
    for(int i=0;i<n;i++) {
       mini1 = min(mini1,first_min[i]) ;
    }

    for(int i=1;i<n;i++) {
        beauty += second_min[i] ;
    }
    cout << beauty + mini1 << endl ;
}

    return 0 ;
}