#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;  cin >> n;
string s;  cin >> s;

if(n < 3){
    cout << "No" << endl;
    return 0;
} 
int x = n-3;
if(s.substr(x,3) == "tea") cout << "Yes" << endl;
else cout << "No" << endl;


    return 0;
}