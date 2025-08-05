#include <bits/stdc++.h>
using namespace std;

void solve(set<int> &ans,int x){
    if (x % 3 != 0) return;

    int a = x/3;
    int b = (x/3) * 2;
    ans.insert(a);
    ans.insert(b);
    solve(ans, a);
    solve(ans, b);

}
int main(){
int t;  cin >> t;

while(t--){
    int n,m;  cin >> n >> m;
    if(n == m){cout << "YES" << endl; continue;}
    if(n%3 != 0 || m > n){ cout << "NO" << endl; continue;}

    set<int> ans;
    solve(ans,n);

    if (ans.count(m)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
    return 0;
}