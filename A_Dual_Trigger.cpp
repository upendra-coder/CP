#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  
    cin >> t;

    while (t--) {
        int p;  cin >> p;
        string s;  
        cin >> s;
        int n = s.size();
        int cnt1 = 0;
        bool flag = false;

        for(int i=0;i<n;i++){
            if(s[i] == '1') cnt1++;
            if(s[i] == '1' && i<n-1 && s[i] == s[i+1]) flag = true;
        }

        if(cnt1 % 2 != 0) cout << "NO" << endl;
        else if(cnt1 == 0) cout << "YES" << endl;
        else if(cnt1 == 2 && flag) cout << "NO" << endl;
        else cout << "YES" << endl;
     
    }
    return 0;
}
