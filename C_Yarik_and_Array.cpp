#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long sum = a[0], sub_sum = a[0];

        for(int j = 1; j < n; j++){
            if((a[j] % 2 + 2) % 2 != (a[j - 1] % 2 + 2) % 2){
                sub_sum = max(a[j], sub_sum + a[j]);
            }
            else{ 
                sub_sum = a[j];
            }
            sum = max(sum, sub_sum);
        }
        cout << sum << endl;
    }
    return 0;
}
