#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n,m;  cin >> n >> m;
    vector<vector<int>> a(n+1, vector<int>(m+1, 0));

    int sum = 0;
    int mini = INT_MAX;
    int neg = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            sum += abs(a[i][j]);
            mini = min(mini, abs(a[i][j]));
            if(a[i][j] < 0) neg++;
        }
    }

    if(neg % 2 == 0) cout << sum << endl;
    else cout << sum - 2*mini << endl;
}
    return 0;
}