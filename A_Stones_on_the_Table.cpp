#include <bits/stdc++.h>
using namespace std ;

int main(){
int n;  cin >> n;
string s;  cin >> s ;

int cnt = 0,i=0;
while(i < s.length() - 1){
    if(s[i] == s[i+1]){
        s.erase(i+1,1);  cnt++;
        continue ;
    }
    i++;
}

cout << cnt << endl ;
    return 0;
}