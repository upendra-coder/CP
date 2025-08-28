#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int n;  cin >> n;
    vector<long long> a(n-1);
    for(int i=0;i<n-1;i++) cin >> a[i];

    if(n == 2){
        cout << a[0] + 1 << " " << a[0] << endl; 
        continue;
    }

    long long val = *max_element(a.begin(),a.end()) + 1 ;
    if(val == 1) val = 2;

    cout << val << " ";
    for(int i=0;i<n-1;i++){
        val += a[i];
        cout << val << " ";
    }
    cout << endl;

}
    return 0;
}