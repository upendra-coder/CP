#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t;
    cin >> t ;

    while(t--) {
        string s ;
        cin >> s ;
        int cntab = 0, cntba = 0 ;
        
        for(int i=0;i<s.length()-1;i++) {
            if(s[i] == 'a' && s[i+1] == 'b')
            cntab++ ;

            if(s[i] == 'b' && s[i+1] == 'a')
            cntba++ ;
        }

        if(cntab == cntba)
        cout << s << endl ;
        
        else if(cntab > cntba){
        for(int i=0;i<s.length()-1;i++) {
            if(cntab - cntba == 1)
            s[i] = 'b' ;

            if(s[i] == 'a' && s[i+1] == 'b')
                cntab-- ;
            
            else if(s[i] == 'b' && s[i+1] == 'a')
                cntba-- ;
          }
          cout << s << endl ;
        }

        else{
            for(int i=0;i<s.length()-1;i++) {
            if(cntba - cntab == 1)
            s[i] = 'a' ;

            if(s[i] == 'b' && s[i+1] == 'a') {
                cntba-- ;
            }

            else if(s[i] == 'a' && s[i+1] == 'b')
                cntab-- ;

          }
          cout << s << endl ;
        }
    }
    return 0 ;
}