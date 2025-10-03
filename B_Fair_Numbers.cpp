#include <bits/stdc++.h>
using namespace std;

bool isFair(long long x){
    long long tmp = x;
    while(tmp > 0){
        int d = tmp % 10;
        if(d != 0 && x % d != 0) return false;
        tmp /= 10;
    }
    return true;
}

int main(){
    int t;  cin >> t;

    while(t--){
        long long n;  cin >> n;
       while(!isFair(n)) {
    n++;
    }
    cout << n << endl;
}
    return 0;
}