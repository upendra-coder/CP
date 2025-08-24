#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n;   cin >> n;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    bool flag = false;
    long long ans = 0;
    for(int i=0;i<n-1;i++){
        if(a[i] == 0 && !flag) continue;
        else {
            flag = true;
            if(a[i] != 0) ans += a[i];
            else ans += 1;
        } 
    }

    cout << ans << endl;
}
    return 0;
}