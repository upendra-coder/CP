#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
int a,b,c,n ;
cin >> a >> b >> c >> n ;

int sum = a+b+c+n ;
if(sum % 3 == 0 ){
    int each = sum/3 ;
    if(each >= a && each >= b && each >= c)
       cout << "YES" << endl ;

       else
       cout << "NO" << endl ;
       }

else
cout << "NO" << endl ;
}
    return 0 ;
}