#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  
    cin >> t;
    while (t--) {
        int n;   
        cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        long long minA = *min_element(a.begin(), a.end());
        long long minB = *min_element(b.begin(), b.end());
        long long sumA = accumulate(a.begin(), a.end(), 0LL);
        long long sumB = accumulate(b.begin(), b.end(), 0LL);

        long long ans1 = sumA + n * minB; 
        long long ans2 = sumB + n * minA;  

        cout << min(ans1, ans2) << endl;
    }
}
