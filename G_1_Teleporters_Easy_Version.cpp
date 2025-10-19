#include <bits/stdc++.h>
using namespace std;

int main(){
int t; cin >> t;

while(t--){
    int n,c;  cin >> n >> c;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    for(int i=0;i<n;i++){
        a[i] += (i+1);
    }
    sort(a.begin(),a.end());
    int cnt = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
       sum += a[i];
       if(sum <= c) cnt++;
       else break;
    }

    cout << cnt << endl;

}

    return 0;
}