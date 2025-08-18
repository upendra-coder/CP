#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n == 3){
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        if(n % 2 == 0){
            for(int i = 1; i <= n; i++){
                cout << (i % 2 ? 1 : -1) << (i==n?'\n':' ');
            }
        } else {
            int k = (n - 1) / 2;
            int a = k - 1;  
            int b = -k;
            for(int i = 1; i <= n; i++){
                cout << (i % 2 ? a : b) << (i==n?'\n':' ');
            }
        }
    }
    return 0;
}
