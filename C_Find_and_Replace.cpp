#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while(t--) {
        int n;  
        cin >> n;
        string s;  
        cin >> s;

        unordered_map<char, int> mp; 
        int val = 1;
        bool ans = true;

        for(int i = 0; i < n; i++) {
            if(mp.find(s[i])!= mp.end()){
                val = !val ;
            }
            else if(mp.find(s[i]) == mp.end()) {
                mp[s[i]] = val; 
                val = !val;      
            }

            if(i > 0 && mp[s[i]] == mp[s[i - 1]]) {
                ans = false; 
                break;
            }
        }

        if(!ans) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
