#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    int p; cin >> p;
    unordered_set<int> passed;
    for(int i = 0, a; i < p; ++i) {
        cin >> a;
        passed.insert(a);
    }

    int q; cin >> q;
    for(int i = 0, a; i < q; ++i) {
        cin >> a;
        passed.insert(a);
    }

    bool flag = true;
    for (int i = 1; i <= n; ++i) {
        if(passed.find(i) == passed.end()) {
            flag = false;
            break;
        }
    }

    if(flag) cout << "I become the guy." << endl;
    else     cout << "Oh, my keyboard!" << endl;

    return 0;
}
