#include <bits/stdc++.h>
using namespace std;

int main(){
int n, m;  cin >> n >> m;
vector<int> a(n);
vector<int> b(m);

for(int i = 0; i < n; i++){
    cin >> a[i];
}

for(int i = 0; i < m; i++){
    cin >> b[i];
}

unordered_map<int, int> mp;
for(int i = 0; i < m; i++){
    mp[b[i]]++;
} 

vector<int> ans;
for(int i = 0; i < n; i++){
    if(mp.find(a[i]) == mp.end() || mp[a[i]] == 0){ ans.push_back(a[i]);
    continue;}
    if(mp[a[i]] > 0 ){
        mp[a[i]]--;
    }
}

for(int i = 0; i < ans.size(); i++){
    cout << ans[i] << " ";}

    return 0;
}