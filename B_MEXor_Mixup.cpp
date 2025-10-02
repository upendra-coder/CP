#include <bits/stdc++.h>
using namespace std;

int bitsolve(int n){
    if(n% 4 == 0) return n;
    else if(n % 4 == 1) return 1;
    else if(n % 4 == 2) return n + 1;
    else return 0;
}

int main(){
int t;  cin >> t;

while(t--){
    int a,b;  cin >> a >> b;

    int xorr = bitsolve(a-1);
    int num = xorr ^ b;

    if(xorr == b) cout << a << endl;
    else {
        if(num == a) cout << a + 2 << endl;
        else cout << a + 1 << endl;
    }
}
    return 0;
}