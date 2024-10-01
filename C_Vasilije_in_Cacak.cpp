#include <bits/stdc++.h>
using namespace std ;

int main() {
int t ;
cin >> t ;

while(t--) {
long long n, k, x;
        cin>>n>>k>>x;
        long long minsum = (k * (k + 1)) / 2;
        long long total = (n * (n + 1)) / 2;
        long long temp = n - k;
        long long maxsum = total - (temp * (temp + 1) / 2);


        if (x >= minsum && x <=  maxsum) 
            cout<<"YES" << endl;
        
        
        else 
            cout<<"NO" << endl;
        

}
    return 0 ;
}