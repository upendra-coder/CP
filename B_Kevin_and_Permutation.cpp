#include <bits/stdc++.h>
using namespace std;

int main(){
int t; cin >> t;
while(t--){
    int n,k;  cin >> n >> k;
    
    int cnt = 1;
    int back = n;
    for(int i=0;i<n;i++){
        if((i+1)%k == 0) cout << cnt++ << " ";
        else cout << back-- << " ";
    }

    cout << endl;
}


    return 0;
}