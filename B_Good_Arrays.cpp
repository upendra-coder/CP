#include <bits/stdc++.h>
using namespace std;

int main(){
int t;   cin >> t;

while(t--){
    int n;  cin >> n;
    vector<long long> a(n);
    int one_cnt = 0;
    long long sum = 0;
    for(int i=0;i<n;i++){
         cin >> a[i];
         sum += a[i];
        if(a[i] == 1) one_cnt++;
    }

    if(n == 1){
        cout << "NO" << endl;   continue;
    }
    
    if(one_cnt + n <= sum) cout << "YES" << endl;
    else cout << "NO" << endl;
}
    return 0;
}