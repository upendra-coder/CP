#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n;  cin >> n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];

    vector<pair<int,int>> mp(n);
    for(int i=0;i<n;i++){
        mp[i].first = a[i];
        mp[i].second = b[i];
    }
    sort(mp.begin(),mp.end());

    for(int i=0;i<n;i++) cout << mp[i].first << " ";
    cout << endl;
    for(int i=0;i<n;i++) cout << mp[i].second << " ";
    cout << endl;
}

    return 0;
}