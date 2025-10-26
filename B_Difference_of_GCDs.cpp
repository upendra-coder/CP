#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n,l,r;  cin >> n >> l >> r;

    bool flag = true;
    vector<int> a(n);
    for(int i = n; i > 0; i--){
    if(r >= i && i >= l){
        a[i-1] = i;
        continue;
    }

      int val = r - (r % i);
      a[i-1] = val;

      if(val < l){
        flag = false;  break;
      }
    }

    if(!flag) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
}
    return 0;
}