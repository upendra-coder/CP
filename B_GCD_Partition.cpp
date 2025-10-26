#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    long long n, sum = 0;  cin >> n;
    vector<long long > a(n), pref(n);
    for(int i = 0; i < n; i++){ 
        cin >> a[i];
        sum += a[i];
    }

    pref[0] = a[0];
    for(int i = 1; i < n; i++) pref[i] = pref[i-1] + a[i];
    
    long long ans = 1;
    for(int i = 0; i < n-1; i++){
      ans = max(ans,__gcd(pref[i], sum - pref[i]));
    }

    cout << ans << endl;
    
}
    return 0;
}