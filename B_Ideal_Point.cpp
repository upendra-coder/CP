#include <bits/stdc++.h>
using namespace std;

void solve(int l,int r, unordered_map<int,int>& mp){
    for(int i=l;i<=r;i++) mp[i]++;
}

int main(){
int t;  cin >> t;

while(t--){
     int n, k;
    cin >> n >> k;
    int L = 0, R = 55;
    while (n--) {
      int l, r;
      cin >> l >> r;
      if (l <= k && k <= r)
        L = max(L, l), R = min(R, r);
    }
    cout << (L == R ? "YES\n" : "NO\n");

}

    return 0;
}