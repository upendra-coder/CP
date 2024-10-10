#include <bits/stdc++.h>
using namespace std ;

int main() {
int t;
cin >> t ;

while(t--) {
    long long n,k,q ;
    cin >> n >> k >> q ;

    vector<long long> a(n) ;
    for(int i=0;i<n;i++)
      cin >> a[i] ;

     long long count = 0;
        long long start = 0;
        
        while(start < n) {
            if(a[start] > q) {
                start++;
                continue;
            }

            long long end = start;
            while(end < n && a[end] <= q) {
                end++;
            }
            
            long long window_size = end - start;
            
            if(window_size >= k) {
                long long valid_subarrays = (window_size - k + 1) * (window_size - k + 2) / 2 ;        // this is basically (n)*(n+1)/2 ;
                count += valid_subarrays;
            }
            
            start = end;
        }
    cout << count << endl ;
}
    return 0 ;
}