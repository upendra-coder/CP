#include <bits/stdc++.h>
using namespace std ;

int main() {
ios::sync_with_stdio(0);
int t ;
cin >> t ;

while(t--) {
    int n ;  cin >> n ;
    string s ;
    cin >> s ;

    stack<char> st ;
    st.push(s[0]) ;
    int i = 1 ;

    while(i < n) {
    if(!st.empty() && st.top() == '(' && s[i] == ')') 
        st.pop();
    else 
        st.push(s[i]);
    i++;
}
    cout << st.size()/2 << endl ;
}
    return 0 ;
}