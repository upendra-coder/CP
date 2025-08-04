#include <bits/stdc++.h>
using namespace std;

int main(){
string s; cin >> s;
int n = s.size();

bool flag = true;
string ans = "";
for(int i=0;i<n;i++){
     if(s[i] == 'h' && ans == "") ans += s[i];
     else if(s[i] == 'e' && ans == "h") ans += s[i];
     else if(s[i] == 'l' && ans == "he") ans += s[i];
     else if(s[i] == 'l' && ans == "hel") ans += s[i];
     else if(s[i] == 'o' && ans == "hell") ans += s[i];
}
if(ans == "hello") cout << "YES" << endl;
else cout << "NO" << endl;

    return 0; 
}