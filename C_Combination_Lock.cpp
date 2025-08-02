#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n; cin >> n;
    vector<int> a(n);
    
    int x = n;
    for(int i=0;i<n;i++){
        a[i] = x--;
    }

    bool flag = true;
    for(int i=0;i<n;i++){
        if(a[i] == i){
            flag = false;  break;
        }
    }

    if(!flag){
        cout << -1 << endl;
    } else {
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
}
}
    return 0;
}