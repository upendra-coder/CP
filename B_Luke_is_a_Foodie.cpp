#include <bits/stdc++.h>
using namespace std ;

int main() {
int t;
cin >> t ;

while(t--) {
    long long n,x ;
    cin >> n >> x ;

    vector<long long>a(n) ;
    for(int i=0;i<n;i++)
    cin >> a[i] ;

        long long num_min = a[0];
		long long num_max = a[0];
		long long res = 0;
		for (int i = 1; i < n; i++) {
			if (a[i] > num_max) {
				num_max = a[i];
			}
			if (a[i] < num_min) {
				num_min = a[i];
			}
			if (num_max - num_min > 2 * x) {
				res++;
				num_min = num_max = a[i];
			}
		}
		cout << res << endl ;
}
    return 0 ;
}