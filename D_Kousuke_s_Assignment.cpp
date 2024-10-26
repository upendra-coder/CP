#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        set<long long> st; 
        st.insert(0);
        long long prefixsum = 0;
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            prefixsum += a[i];
            if(st.count(prefixsum)) {
                cnt++;
                st.clear();
                st.insert(0); 
                prefixsum = 0;  
            }
            st.insert(prefixsum);  
        }
        cout << cnt << endl;
    }
    return 0;
}
