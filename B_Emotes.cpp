#include <bits/stdc++.h>
using namespace std ;

int main() {
int n ;
long long m,k ;
cin >> n >> m >> k ;

vector<long long> ans(n) ;
for(int i=0;i<n;i++) {
    cin >> ans[i] ;
}

sort(ans.begin(),ans.end()) ;
long long max1 = ans[n-1] ;
long long max2 = ans[n-2] ;

// cout << (m/(k+1))*(k*max1 + max2) + (m%(k+1))*max1 ;
long long full_patterns = m / (k + 1);
long long leftover = m % (k + 1);  
long long result = full_patterns * (k * max1 + max2) + leftover * max1;

cout << result;

    return 0 ;
}