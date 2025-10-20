#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n;  cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int i = 0, j = n-1;
    int k = 0, m = n-1;

    while(i < n && a[i] == b[k]){ i++; k++;}
    while(j >= 0 && a[j] == b[m]){ j--;  m--;}

    int mini = INT_MAX, maxi = INT_MIN;
    for (int k = i; k <= j; k++) {
    mini = min(mini, a[k]);
    maxi = max(maxi, a[k]);
    }

    while(i - 1 >= 0 && a[i - 1] <= mini){
        i--;  mini = a[i];
    }
    while(j+1 < n && a[j + 1] >= maxi){
        j++;  maxi = a[j];
    }

    cout << i+1 << " " << j+1 << endl;
}
    return 0;
}