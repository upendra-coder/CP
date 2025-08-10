#include <bits/stdc++.h>
using namespace std;

int main(){
int n;  cin >> n;
vector<string> str(n);
for(int i=0;i<n;i++)cin >> str[i];

int tm1 = 0, tm2 = 0;
unordered_map<string,int> mp;
for(int i=0;i<n;i++){
    mp[str[i]]++;
}

string ans = "";
    int maxFreq = 0;

    for(auto &it : mp){
        if(it.second > maxFreq){
            maxFreq = it.second;
            ans = it.first;
        }
    }

    cout << ans << endl;

    return 0;
}