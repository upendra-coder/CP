#include <bits/stdc++.h>
using namespace std;

int count_white(string &s, int i,int j){
    int cnt = 0;
    for(int p=i;p<=j;p++){
        if(s[p] == 'W') cnt++;
    }

    return cnt ;
}

int main(){
int t;  cin >> t;

while(t--){
    int n,k; cin >> n >> k;
    string s; cin >> s;

    int i = 0, j = k-1;
    int ans = INT_MAX;
    int white = count_white(s,i,j);

    while(j < n){
        ans = min(ans,white);
        if(s[i] == 'W') white--; 
         i++;  j++;
        if(s[j] == 'W') white++;
    }

    cout << ans << endl;

}

    return 0;
}