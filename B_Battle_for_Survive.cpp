#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n;  cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    long long val = 0;
    for(long long i=0;i<=n-3;i++) val += a[i];

    cout << a[n-1] - (a[n-2] - val) << endl; 
}

    return 0;
}