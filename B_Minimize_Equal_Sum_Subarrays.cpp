#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n;  cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    for(int i=0;i<n;i++){
        if(a[i] == n) cout << 1 << " ";
        else cout << a[i] + 1 << " ";
    }
    cout << endl;
}
    return 0;
}