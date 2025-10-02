#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    string s1,s2;  cin >> s1 >> s2;
    int maxlen = 0;

     for (int i = 0; i < s1.size(); i++) {
        for (int len = 1; i+len <= s1.size(); len++) {
            string sub = s1.substr(i, len);
            if (s2.find(sub) != string::npos) {
                if (len > maxlen) {
                    maxlen = len;
                }
            }
        }
    }

    cout << (s1.size() + s2.size() - 2 * maxlen) << endl;
}
    return 0;
}