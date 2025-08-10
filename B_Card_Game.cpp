#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        vector<int> a = {a1, a2};
        vector<int> b = {b1, b2};
        int wins = 0;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                int winA = 0, winB = 0;
                if (a[0] > b[0]) winA++;
                else if (a[0] < b[0]) winB++;
                if (a[1] > b[1]) winA++;
                else if (a[1] < b[1]) winB++;
                if (winA > winB) wins++;

                reverse(b.begin(), b.end());
            }
            reverse(a.begin(), a.end());
        }

        cout << wins << endl;
    }
}
