#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n;  cin >> n;
    if(n%2 == 0){
        for(int i=1;i<=n-2;i++){
        cout << 2 << " ";
        }
        cout << 1 << " " << 3 ;
    } else {
        for(int i=1;i<=n;i++) cout << n << " ";
    }
    cout << endl;
}

    return 0;
}