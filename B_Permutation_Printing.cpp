#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    long long n; cin>>n;
    long long l=1,r=n;
    for(long long i=1;i<=n;i++){
        if(i&1){
            cout << l << " ";
            l++;
        }
        else{
            cout << r << " ";
            r--;
        }
    }
    cout << endl;
}

    return 0;
}