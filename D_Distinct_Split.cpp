#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    string s ; int n ;
    cin >> n ; cin >> s ;
    int count = 0 ;

    unordered_map<char,int>mp ;
    int distinct = 0 ;
    vector<int> front(n) ;
    vector<int> back(n) ;
    for(int i=0;i<n;i++) {
        if(mp.find(s[i]) == mp.end()){
            mp[s[i]]++ ;
            distinct++ ;
        }
        front[i] =  distinct ;
    }

    distinct = 0 ;
    mp.clear() ;
    for(int i=n-1;i>=0;i--) {
        if(mp.find(s[i]) == mp.end()){
            mp[s[i]]++ ;
            distinct++ ;
        }
        back[i] =  distinct ;
    }

    for(int i=0;i<n-1;i++) {
        count = max(count,front[i]+back[i+1]) ;
    }

    cout << count << endl ;
}
    return 0 ;
}