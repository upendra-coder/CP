#include <bits/stdc++.h>
using namespace std;

int main(){
long long n; cin >> n;
vector<long long> a(n);

for(int i = 0; i < n; i++){
    cin >> a[i];
}
long long ans = 0;
unordered_map<long long, long long> mp;
for(int i = 0; i < n; i++){
    mp[i+a[i]]++;
}

for(int i = 0; i < n; i++){
    if(mp.find(i-a[i]) != mp.end()){
        ans += mp[i-a[i]];
    }
}
cout << ans << endl;

    return 0;
}