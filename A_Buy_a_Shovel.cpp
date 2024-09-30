#include <bits/stdc++.h>
using namespace std ;

int main() {
int k,r ;
cin >> k >> r ;
int cnt = 1 ;

while(true){
    int mul = k*cnt ;

    if(mul % 10 == r || mul % 10 == 0)
    break ;
    cnt++ ;
}
cout << cnt ;

    return 0 ;
}