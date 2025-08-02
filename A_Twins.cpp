#include <bits/stdc++.h>
using namespace std;

bool good(int k, const vector<int>& coins, long long total) {
    long long selected_sum = 0;
    for (int i = 0; i < k; ++i)
        selected_sum += coins[i];
    
    return selected_sum > (total - selected_sum);
}

int main(){
int n;  cin >> n;
vector<int> coins(n);
long long total = 0;

    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        total += coins[i];
    }

sort(coins.rbegin(), coins.rend());
int low = 1, high = n, ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (good(mid, coins, total)) {
            ans = mid;       
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

cout << ans << endl;
return 0;
}