#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;  
    cin >> t;

    while(t--){
        int n;  
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        vector<int> count(26, 0); 
        string ans(n, ' ');

        char nextChar = 'a';
        for(int i=0;i<n;i++){
            bool found = false;
            for(int c=0; c<26; c++){
                if(count[c] == a[i]){
                    ans[i] = 'a' + c;
                    count[c]++;
                    found = true;
                    break;
                }
            }
            if(!found){
                ans[i] = nextChar;
                count[nextChar - 'a']++;
                nextChar++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
