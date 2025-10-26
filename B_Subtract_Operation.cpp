#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n,k;  cin >> n >> k;
    vector<int> a(n), b(n,0);
    for(int i = 0; i < n; i++) cin >> a[i];

    bool flag = false;
    sort(a.begin(),a.end());
    int i = 0, j = 1;
    while(j < n){
    int val = a[j] - a[i];
    if(val == k){
        flag = true;
        break;
    }
    if(val < k) j++;
    else i++;
    if(i == j) j++;
}

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

}
    return 0;
}