#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> words;
    for (int i = 0; i < s.size(); ) {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB") {
            i += 3; 
        } else {
            string word = "";
            while (i < s.size() && !(i + 2 < s.size() && s.substr(i, 3) == "WUB")) {
                word += s[i];
                i++;
            }
            words.push_back(word);
        }
    }
    for (int i = 0; i < words.size(); ++i) {
        if (i != 0) cout << " ";
        cout << words[i];
    }
    cout << endl;
    return 0;
}
