#include <bits/stdc++.h>
using namespace std;

int main(){
int n;  cin >> n;
vector<long long> a(n);
for(int i=0;i<n;i++) cin >> a[i];

if(n==1){
    cout << 1 << endl; return 0;
}
    
int maxlen = 1;
int curr_len = 1;
        
for(int i=0;i<n-1;i++){
    if(a[i] <= a[i+1]){
        curr_len++;
        maxlen = max(maxlen,curr_len);
    } else{
        curr_len = 1;
    }
} 
    cout << maxlen << endl;

    return 0;
}