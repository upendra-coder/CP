#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n,k;  cin >> n >> k;
    string s;  cin >> s;

    string r = s;
    reverse(r.begin(), r.end());

     char min_ch = *min_element(s.begin(), s.end());
        char max_ch = *max_element(s.begin(), s.end());

        if (s < r || (k >= 1 && min_ch != max_ch)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
}
    return 0;
}