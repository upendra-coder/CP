#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;

    while(t--){
        int n, k;  cin >> n >> k;
        string s; cin >> s;

        unordered_map<char, int> upper_counts;
        unordered_map<char, int> lower_counts;

        for(char ch : s){
            if(isupper(ch)) upper_counts[ch]++;
            else lower_counts[ch]++;
        }

        int ans = 0;

        for(char c = 'a'; c <= 'z'; ++c) {
            char C = toupper(c);
            int pairs = min(lower_counts[c], upper_counts[C]);
            ans += pairs;
            lower_counts[c] -= pairs;
            upper_counts[C] -= pairs;
        }

        int bonus_ops_possible = 0;
        for(char c = 'a'; c <= 'z'; ++c) {
            bonus_ops_possible += lower_counts[c] / 2;
        }
        for(char c = 'A'; c <= 'Z'; ++c) {
            bonus_ops_possible += upper_counts[c] / 2;
        }
        
        ans += min(k, bonus_ops_possible);

        cout << ans << endl;
    }
    return 0;
}