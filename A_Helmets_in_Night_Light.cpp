k + ceil((k*(y+1)-1)/(x-1))using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long n, p;
        cin >> n >> p;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<pair<long long, long long>> arr(n);
        for (int i = 0; i < n; i++) arr[i] = {b[i], a[i]};
        sort(arr.begin(), arr.end());  

        long long remaining = n - 1; 
        long long cost = p;          

        for (int i = 0; i < n && remaining > 0; i++) {
            long long share_cost = arr[i].first;
            long long capacity = arr[i].second;

            if (share_cost >= p) break;

            long long can_share = min(capacity, remaining);
            cost += can_share * share_cost;
            remaining -= can_share;
        }

        cost += remaining * p;

        cout << cost << endl;
    }
    return 0;
}
