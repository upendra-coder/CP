#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;  
    cin >> t;

    while(t--){
        int n, x;  
        cin >> n >> x;
        vector<long long> a(n), b(n), c(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        for(int i=0;i<n;i++) cin >> c[i];

        int i = 0, j = 0, k = 0;
        long long kg = 0;
        bool flag = false;

        while(i < n && ((kg | a[i]) | x) == x){
            kg |= a[i++];
            if(kg == x) flag = true;
        }
        while(j < n && ((kg | b[j]) | x) == x){
            kg |= b[j++];
            if(kg == x) flag = true;
        }
        while(k < n && ((kg | c[k]) | x) == x){
            kg |= c[k++];
            if(kg == x) flag = true;
        }

        if(flag || x == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
