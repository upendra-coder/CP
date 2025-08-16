#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    multiset<int> bag; 

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            bag.insert(x);   
        } 
        else if (type == 2) {
            int ans = *bag.begin();
            cout << ans << endl;
            bag.erase(bag.begin()); 
        }
    }
    return 0;
}
