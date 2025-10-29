#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n;  cin >> n;
    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];
    
    sort(b.begin(),b.end());
    if(b[0] != 1){
        cout << "NO" << endl;   continue;
    }

    long long sum = b[0];
    bool flag = true;

    for(int i = 1; i < n; i++){
        if(sum < b[i]){
            flag = false;  break;
        }
        sum += b[i];
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}
    return 0;
}