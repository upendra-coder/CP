#include <bits/stdc++.h>
using namespace std;

int main(){
int n,q;  cin >> n >> q;
vector<int> a(n),t(q);

for(int i = 0; i < n; i++) cin >> a[i];
for(int j = 0; j < q; j++) cin >> t[j];

unordered_map<int,int> mp;
for(int i = n-1; i >= 0; i--){
    mp[a[i]] = i + 1;
} 

vector<int> ans;
for(int i = 0; i < q; i++){
    int val = t[i];
    int key = mp[val];
    ans.push_back(mp[val]);
    mp[val] = 1;

    for(auto it : mp){
        if(it.first == val) continue;
        else{
           if(it.second < key) mp[it.first]++;
        }
    }
}
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}