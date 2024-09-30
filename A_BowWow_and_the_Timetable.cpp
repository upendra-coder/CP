#include <bits/stdc++.h>
using namespace std ;

int main() {
long long s ;
cin >> s ;

long long num = 0 ;
int i = 0 ;
while(s) {
    int digit = s%10 ;
    num += digit*pow(2,i);
    i++ ;  s = s/10 ;
}
//cout << num << endl ;
int ans = 0 ;
for (int i = 0; pow(4, i) < num; i++) {
        ans++ ;
    }
cout << ans << endl ;
    return 0 ;
}