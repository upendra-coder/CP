#include <bits/stdc++.h>
using namespace std;

int main(){
string n;  cin >> n;

int ans = 0 ;
   for(char ch : n) {
        if(ch == '4' || ch == '7') {
            ans++; }
    }

if(ans == 4 || ans == 7) cout << "YES" << endl;
else cout << "NO" << endl; 

    return 0;
}