#include <bits/stdc++.h>
using namespace std;

int main(){
int t; cin >> t;

while(t--){
    int n,k;  cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ;j ++){
            if(a[i][j] != a[n-1-i][n-1-j]) cnt++;
        }
    }
    
    cnt /= 2;
    if (cnt <= k && ((k - cnt) % 2 == 0 || n % 2 != 0)) cout << "YES" << endl;
    else cout << "NO" << endl;

}
    return 0;
}