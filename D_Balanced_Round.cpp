#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
int n , k;
cin >> n >> k ;
vector<int> ans(n) ;

for(int i=0;i<n;i++) {
    cin >> ans[i] ;
}
sort(ans.begin(),ans.end()) ;

int brk_pt = 0 ;
int l = 0 ;
int maxi= INT_MIN ;
int i ;
for(i=0;i<n-1;i++) {
   if(ans[i+1] - ans[i] > k){
   brk_pt ++ ;
   if(i-l+1 > maxi) {
    maxi = i-l+1 ;
   }
    l = i+1 ;
  }
}

maxi = max(maxi,i-l+1) ;
if(brk_pt == 0)
cout << 0 << endl ;

else
cout << n - maxi << endl ;

}
return 0 ;
}