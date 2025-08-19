#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    string s;  cin >> s;
    int n = s.size();
    
    if(s.substr(0,2) == "aa"){
        cout << s[0] << " " << s[1] << " " << s.substr(2,n-2);
    } else if(s.substr(0,2) == "bb"){
        cout << s[0] << " " << s[1] << " " << s.substr(2,n-2);
    } else if(s.substr(0,2) == "ba"){
        cout << s[0] << " " << s[1] << " " << s.substr(2,n-2);
    } else if(s.substr(0,2) == "ab"){
        cout << s[0] << " " << s.substr(1,n-2) << " " << s.substr(n-1,1);
    }
    cout << endl;
}

    return 0;
}