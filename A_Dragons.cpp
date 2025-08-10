#include <bits/stdc++.h>
using namespace std;

int main(){
int s,n; cin >> s >> n;

vector<pair<int,int>> a(n);
for(int i=0;i<n;i++){ cin >> a[i].first >> a[i].second; }

sort(a.begin(),a.end());
bool flag = true;

for(int i=0;i<n;i++){
    if(s > a[i].first){ s+= a[i].second; }
    else { flag = false;  break;}
}

if(!flag) cout << "NO" << endl;
else cout << "YES" << endl;

    return 0;
}