#include <bits/stdc++.h>
#define ll long long
using namespace std ;

int main() {
int t;
cin >> t ;

while(t--) {
    ll n ;
    cin >> n ;

    if(n%2 != 0){
    cout << "1" << endl ;
    continue ;}

    int x = 0 ;
    for(int i=1;i<n;i++) {
        if(n%i != 0){
        x = i ; 
        break ;}
    }
  
    cout << x-1 << endl ;

}

    return 0 ;
}