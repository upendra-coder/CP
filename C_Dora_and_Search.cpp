#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int mini = 1;
        int maxi = n;
        int l = 0,r = n-1;

        while(l <= r){
            if(a[l] == mini){
                mini++;
                l++;
            }
            else if(a[l] == maxi){
                maxi--;
                l++;
            }
            else if(a[r] == mini){
                mini++;
                r--;
            }
            else if(a[r] == maxi){
                maxi--;
                r--;
            }
            else break;
        }

        if(l > r) cout << -1 << endl;
        else cout << l+1 << " " << r+1 << endl;
    }
}