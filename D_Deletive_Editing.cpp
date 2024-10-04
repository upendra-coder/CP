#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
  string s,t ;
  cin >> s >> t ;

  unordered_map<char,int> mp ;
  for(int i=0;i<t.length();i++) {
    mp[t[i]]++ ;
  }

  int j = 0 ;
  for(int i=0;i<s.length();i++) {
    if(mp.find(s[i]) != mp.end() && mp[s[i]] == 0 && s[i] == t[0]){
      mp.clear() ;

    for(int i=0;i<t.length();i++) {
    mp[t[i]]++ ;
    }
      j = 0;
    }

    if(j == t.length()){
      if(s[i] == t[j-1])
      continue ;

    if(mp.find(s[i]) != mp.end()){
      mp[s[i]]-- ;
      }
    }

    if(s[i] == t[j]) {
      mp[s[i]]-- ;   j++ ;
     }
  }

  bool flag = true ;
  for(auto i:mp) {
    if(i.second != 0){
    flag = false;
    break ;}
  }
 
  if(flag)
  cout << "YES" << endl ;

  else 
  cout << "NO" << endl ;

}

    return 0 ;
}