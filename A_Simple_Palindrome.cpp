#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;

    while(t--){
        int n; cin >> n;
        string vowels = "aeiou";
        string s ;

        int c = n / 5;
        int r = n % 5;

        while(s.size() < n) s += vowels;
        s.resize(n);
        sort(s.begin(),s.end());
        cout << s << endl;
    }

    return 0;
}
