#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n,m,p,q;
    cin >> n >> m >> p >> q;

    if(n%p == 0 && q*n/p != m) cout << "NO" << endl;
    else cout << "YES" << endl;
}

    return 0;
}