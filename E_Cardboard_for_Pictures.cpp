#include <bits/stdc++.h>
using namespace std;

bool check(long long mid, long long c, vector<int>& a){
    long long val = 0;
    for(long long x : a){
        long long term = (x + 2*mid);
        val += term * term;
        if(val > c) return false; 
    }
    return val <= c;
}

int main(){
    int t;  
    cin >> t;

    while(t--){
        int n; long long c;
        cin >> n >> c;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(),a.end());
        long long low = 1, high = (sqrt(c) - a[n-1] + 1)/2; 
        long long ans = 0;

        while(low <= high){
            long long mid = (low + high) / 2;
            if(check(mid, c, a)){
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
