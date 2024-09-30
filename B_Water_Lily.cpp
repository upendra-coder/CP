#include <bits/stdc++.h>
using namespace std; 

int main() {
double h,l ;
cin >> h >> l ;

double ans = (l*l + h*h)/(2*h) - h ;
cout << fixed << setprecision(9) << ans << endl;

    return 0 ;
}
