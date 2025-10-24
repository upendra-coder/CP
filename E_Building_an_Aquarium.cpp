#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n,x;  cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(),a.end());
    long long sum = 0,h = LLONG_MAX;
    for(int i = 0; i < n; i++){
        sum += a[i];
        long long val = (x + sum)/(i+1);
        h = min(h,val);
    }

    cout << h << endl;
}
    return 0;
}