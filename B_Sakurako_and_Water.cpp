#include <bits/stdc++.h>
using namespace std ;

int diagmax(vector<vector<int>>a , int i,int j,int n) {
    int mini = 0 ;

       while(i < n && j < n) {
        if(a[i][j] < 0)
          mini = min(a[i][j],mini) ;

          i++ ;  j++ ;
       }
       return mini ;
}
int main() {
int t ;  cin >> t ;

while(t--) {
    int n ;  cin >> n ;

    vector<vector<int>> a(n,vector<int>(n,0)) ;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> a[i][j] ;
        }
    }

    int ans = 0 ;
    for(int i=0;i<n;i++) {
       for(int j=0;j<n;j++) {
        if(i > 0 && j > 0) continue ;
        ans += diagmax(a,i,j,n) ;
       }
    }

    cout << abs(ans) << endl ;
}

    return 0 ;
}