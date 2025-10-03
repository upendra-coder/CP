#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t; cin >> t;

    while(t--){
        long long x,y,k;  
        cin >> x >> y >> k;

        long long need = k * (y + 1) - 1; 
        long long trades = (need + (x - 2)) / (x - 1); 
        cout << k + trades << endl;
    }

    return 0;
}
