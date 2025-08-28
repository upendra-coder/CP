#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  
    cin >> t;
    while(t--){
        int n;  
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int maxi = 1, freq = 1;
        for(int i=1; i<n; i++){
            if(a[i] == a[i-1]) freq++;
            else freq = 1;
            maxi = max(maxi, freq);
        }

        int op = 0;
        int curr = maxi;
        while(curr < n){
            int add = min(curr, n - curr);
            op += add + 1;
            curr *= 2;
        }

        cout << op << "\n";
    }
    return 0;
}
