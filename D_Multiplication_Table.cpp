#include <bits/stdc++.h>
using namespace std ;

int main() {
int n,m,k ;
cin >> n >> m >> k

    vector<vector<int>> nums(n,vector<int>(m,0)) ;

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            int val ;
            cin >> val;
            nums[i][j] = val ;
        }
    }

    return 0 ;
}