#include <bits/stdc++.h>
using namespace std;

int main(){
int n; cin >> n;
vector<int> nums(n);
for(int i = 0; i < n; i++) {
    cin >> nums[i];
}

unordered_map<int, int> mp;
for(int i = 0; i < n; i++) {
    mp[nums[i]]  = i+1;
}
int cnt = 1;
vector<int> ans(n);
for(int i = 0; i < n; i++) {
    if(mp.find(cnt) != mp.end()) {
        ans[i] = mp[cnt];
    }
    cnt++;
}

for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}