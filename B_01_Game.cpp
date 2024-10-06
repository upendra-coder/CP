#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
    string s ;
    cin >> s ;

    // int cnt = 0 ;
    // int i = 0 ;
    // while(i < s.length()-1){
    //     if((s[i] == '1' && s[i+1] == '0' ) || (s[i] == '0' && s[i+1] == '1' )) {
    //         s.erase(i,2) ;
    //         cnt++ ;                             // some issue with this 
    //         if (i > 0)                          // have to look for how indices are changed
    //         i-- ;
    //     }

    //     else
    //     i++ ;
    // }
  
    int count_0 = 0,count_1 = 0 ;
    for(int i=0;i<s.length();i++) {
        if(s[i] == '0')
        count_0++ ;

        else
        count_1++ ;
    }

    int cnt = min(count_0,count_1) ;
    if(cnt % 2 == 0) 
    cout << "NET" << endl ; 

    else 
    cout << "DA" << endl ;
}


    return 0 ;
}