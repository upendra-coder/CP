#include <bits/stdc++.h>
using namespace std;

int main(){
int t; cin >> t;

while(t--){
    int n;  cin >> n;
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    reverse(a.begin()+1, a.end());
    int i = 1, ans = 0;
    while(i < n){
        if(a[i+1] == a[1]){
            i++;  continue;
        }
        ans++;
        i *= 2;
    }

    cout << ans << endl;

}
    return 0;
}