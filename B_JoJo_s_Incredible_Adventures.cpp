#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    string s;  cin >> s;

    s += s;
    long long maxi = 0, len = 0;
    long long n = s.size() / 2;
    for(int i = 0; i < s.size(); i++){
      if(s[i] == '1') len++;
      else len = 0;
      
      maxi = max(maxi,len);
    }

    long long area = 0, i = maxi, j = 1;
    while(i > 0){
      area = max(area,i*j);
      i--;  j++;
    }

    if(maxi > n)  cout << n*n << endl;
    else cout << area << endl;
}
    return 0;
}