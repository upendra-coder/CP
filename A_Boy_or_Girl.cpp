#include <bits/stdc++.h>
using namespace std;

int main(){
string str;  cin >> str;

unordered_map<int,bool> mp ;
int cnt = 0;
for(int i=0;i<str.length();i++){
    if(mp[str[i]]) continue;
    mp[str[i]] = true ;
    cnt++;
}

if(cnt % 2 != 0) cout << "IGNORE HIM!" << endl;
else cout << "CHAT WITH HER!" << endl ;
    return 0;
}