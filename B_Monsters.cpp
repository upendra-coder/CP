#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;  
    cin >> t;

    while(t--){
        int n, k;  
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] %= k;
            if(a[i] == 0) a[i] = k; 
        }

        vector<pair<int,int>> vec;
        for(int i = 0; i < n; i++) {
            vec.push_back({a[i], i+1}); 
        }

        stable_sort(vec.begin(), vec.end(), [](auto &p1, auto &p2){
            return p1.first > p2.first;
        });

        for(auto &p : vec) cout << p.second << " "; 
        cout << endl;
    }

    return 0;
}
