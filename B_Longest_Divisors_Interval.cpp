#include <bits/stdc++.h>
#define ll long long
using namespace std ;

int main() {
int t;
cin >> t ;

while(t--) {
    ll n ;
    cin >> n ;

    long long x;
    for(long long i=1; ;i++) {
        if(n%i != 0){
        x = i-1 ; 
        break ;}
    }
  
    cout << x << endl ;

}

    return 0 ;
}