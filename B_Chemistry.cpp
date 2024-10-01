#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    int n , k ;
    cin >> n >> k ;
    string s ; 
    cin >> s ;

    unordered_map<char,int> mp ;
    for(int i=0;i<n;i++) {
         mp[s[i]]++ ;
    }

    int pairs = 0 ;
    int extra = 0 ;
    for(auto it : mp) {
        pairs += it.second/2 ;
        extra += it.second%2 ;
    }

    if(extra - 1 == k)
    cout << "YES" << endl ;

    else if(extra > k)
    cout << "NO" << endl ;

    else 
    cout << "YES" << endl ;

        
}


    return 0 ;
}