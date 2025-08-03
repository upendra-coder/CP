#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool found = false;

    for (char c : s) {
        if (c == 'H' || c == 'Q' || c == '9') {
            found = true;
            break;
        }
    }

    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
