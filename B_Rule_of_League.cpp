#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  
    cin >> t;

    while (t--) {
        int n, x, y;  
        cin >> n >> x >> y;

        if ((x == 0 && y == 0) || (x != 0 && y != 0)) {
            cout << -1 << endl;
            continue;
        }

        int step = (x != 0 ? x : y);  

        if ((n - 1) % step != 0) {
            cout << -1 << endl;
            continue;
        }

        int player = 1;
        int games = n - 1;

        for (int i = 0; i < games; i++) {
            cout << player << " ";
            if ((i + 1) % step == 0) {
                player = i + 2 + 1; 
            }
        }
        cout << endl;
    }

    return 0;
}
