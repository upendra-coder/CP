#include <bits/stdc++.h>
using namespace std ;

int main(){
int n; cin >> n;

int ans = 0;
vector<vector<int>>a(n, vector<int>(3));
for(int i=0;i<n;i++){
    int cnt = 0;
    for(int j=0;j<3;j++){
        cin >> a[i][j];
        if(a[i][j] == 1) cnt++;
    }

    if(cnt >= 2) ans++ ;
}
cout << ans << endl ;

    return 0;
}