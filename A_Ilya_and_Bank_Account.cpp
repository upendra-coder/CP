#include <bits/stdc++.h>
using namespace std;

int main(){
long long n;  cin >> n;
if(n > 0) cout << n;
else{
    long long val = abs(n);
    string s = to_string(val);
    int size = s.size();
    if(s[size-1] >= s[size-2]) s.erase(size-1,1);
    else if (s[size-1] < s[size-2]) s.erase(size-2,1);

    if(s == "0") cout << 0 << endl;
    else cout << '-' << s << endl;
}
    return 0;
}