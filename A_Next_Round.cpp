#include <bits/stdc++.h>
using namespace std ;

int main(){
int n,k;  cin >> n >> k;

vector<int> a(n);
for(int i=0;i<n;i++){
    cin >> a[i];
}

int val = a[k-1];
int cnt = 0;
for(int i=0;i<n;i++){
if(a[i] >= val && a[i] > 0) cnt++;
}

cout << cnt << endl;


    return 0;
}