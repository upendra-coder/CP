#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n;  cin >> n;
    vector<long long> b(n);

    for(int i=0;i<n;i++) cin >> b[i];

    sort(b.begin(), b.end());
    bool flag = false;
    for(int i=0;i<n-1;i++){
        if(b[i] == b[i+1]){
            flag = true;
            break;
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

}
    return 0;
}