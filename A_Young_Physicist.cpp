#include <bits/stdc++.h>
using namespace std ;

int main() {
int n ;
cin >> n ;

int sumx = 0,sumy = 0,sumz = 0 ;
while(n--) {
    int arr[3] ;

    for(int i=0;i<3;i++) {
        cin >> arr[i] ;
    }
    sumx += arr[0] ;
    sumy += arr[1] ;
    sumz += arr[2] ;

}
    if(sumx == 0 && sumy == 0 && sumz == 0)
    cout << "YES" << endl ;

    else 
    cout << "NO" << endl ;

    return 0 ;
}