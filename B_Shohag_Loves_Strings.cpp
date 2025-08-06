#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
string s;  cin >> s;
string ans = "";
int n = s.size();


for(int i=0;i<s.size();i++){
    if(s[i] == s[i+1]){
        ans += s.substr(i,2);
        break;
    }

    if(i+2 < s.size() && (s[i] != s[i+1] && s[i+1] != s[i+2] && s[i+2] != s[i])){
        while(ans.size() < 3){
            ans += s[i];
            i++;
        }
        break;
    }
}
if(ans == "") cout << -1 << endl;
else cout << ans << endl;
}


    return 0;
}