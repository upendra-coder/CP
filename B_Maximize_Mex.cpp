// More Optimised Approach
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        
        int n,k;
        cin>>n>>k;
        map<int,int> mp;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
        }

        int i=0;
        for(auto it : mp) {
            if(mp[i] == 0)  break ;
            else {
                mp[i+k] += mp[i] - 1 ; 
                i++ ;
            }
        }

        cout << i << endl ;
    
    }
    return 0;
}



//  TLE -> approach is same as above

// #include <bits/stdc++.h>
// using namespace std ;

// int main() {
// int t ;
// cin >> t ;

// while(t--) {
//     long long n ,x ;
//     cin >>  n >> x ;

//     vector<long long> a(n) ;
//     long long maxi = INT_MIN ;
//     for(int i=0;i<n;i++) {
//         cin >> a[i] ;
//         maxi = max(maxi,a[i]) ;
//     }
//     sort(a.begin(),a.end()) ;
//     set<long long> s(a.begin(),a.end()) ;

//     if(a[0] != 0){
//         cout << 0 << endl ;  continue ;
//     }

//     else {
//         long long numcnt = 0 ;
//         int i = 0 ;

//         while(i < n-1) {
//             if(a[i] == a[i+1]){
//             long long new_value = a[i + 1] + x;
//                 a.push_back(new_value);                                        
//                 a.erase(a.begin() + i + 1);
//                 inplace_merge(a.begin() + i, a.end() - 1, a.end());

//                 maxi = max(maxi, new_value);
//             continue ;}

//             if(a[i] == numcnt){
//             numcnt++ ;
//             i++ ;}

//             else 
//             break ;
//         }

//         if(numcnt != maxi)
//         cout << numcnt << endl ;

//         else{
//             cout << numcnt+1 << endl ;
//         }
//     }

// }

//     return 0 ;
// }