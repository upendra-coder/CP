// Optimised Approach
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while(t--) {
        int n; char s; string a;
        cin >> n >> s >> a;
        a += a;

        if(s == 'g') {
            cout << 0 << endl; 
            continue;
        }

        int max_dist = 0;
        int last_g = -1;
        for(int i = 2 * n - 1; i >= 0; i--) {
            int pos = i % n;
            
            if(a[pos] == 'g') {
                last_g = i;
            }
            
            if(a[pos] == s && last_g != -1) {
                max_dist = max(max_dist, last_g - i);
            }
        }
        
        cout << max_dist << endl;
    }
    return 0;
}







// TLE , same logic applied as Ski Resort
// #include <bits/stdc++.h>
// using namespace std ;

// int main() {
// ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// int t;
// cin >> t ;

// while(t--) {
// int n ;  char s ;  string a ;
// cin >> n ;   cin >> s >> a ; 
// int cnt = 0 ;
// for(int i=0;i<n;i++) {
//     if(a[i] == s)  cnt++ ;
// }
// a += a ;
// if(s == 'g'){
//     cout << 0 << endl ; continue ;
// }

// else {
//        long long start = 0;
//        long long window_size = LLONG_MIN ;
//         while(start < 2*n) {
//             if(cnt == 0) break ;
//             if(a[start] != s) {
//                 start++;
//                 continue;
//             }

//             long long end = start;
//             while(end < 2*n && a[end] != 'g') {
//                 end++;
//             }
            
//             long long curr_window_size = end - start ;
//             window_size = max(window_size,curr_window_size) ;
//             start++ ;
//             cnt-- ;
//         }
//         cout << window_size << endl ;
//    }
// }

//     return 0 ;
// }




