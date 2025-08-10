#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    long double ans = 0.0;

    for (int i = 0; i < n; i++) {
        if (s[i] != 't') continue;
        int count_t = 0;
        for (int j = i; j < n; j++) {
            if (s[j] == 't') count_t++;
            if (s[j] == 't' && j - i + 1 >= 3) {
                long double val =  double(count_t - 2) / double(j - i + 1 - 2);
                ans = max(ans, val);
            }
        }
    }
    
    cout << fixed << setprecision(17) << ans << endl;
    return 0;
}
