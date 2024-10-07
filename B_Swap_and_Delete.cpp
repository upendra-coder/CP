#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    string s ;
    cin >> s ;

    unordered_map<char,int> mp ;
    for(int i=0;i<s.length();i++) {
        mp[s[i]]++ ;
    }

    for(int i=0;i<s.length();i++) {
        if(s[i] == '1') mp['0']-- ;
        else  mp['1']-- ;

        if(mp['0'] == -1){
            mp['0']++ ;  break ;
        }
        if(mp['1'] == -1){
            mp['0']++ ;  break ;
        }
    }

    cout << mp['0'] + mp['1'] << endl ;
}


    return 0 ;
}