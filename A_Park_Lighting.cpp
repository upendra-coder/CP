#include <bits/stdc++.h>
using namespace std ;

int main() {
int t;
cin >> t ;

while(t--) {
    int n,m ;
    cin >> n >> m ;

   int product = n*m ;

   if(product %2 == 0)
   cout << product/2 << endl ;

   else 
   cout << product/2 + 1 << endl ;

}




    return 0 ;
}