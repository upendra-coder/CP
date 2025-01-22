#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t ;

while(t--){
    int n;  cin >> n;

    vector<int>a(n);
    unordered_map<int,bool> mp;
    int distinct = 0;
    for(int i=0;i<n;i++){
       cin >> a[i];
       if(mp[a[i]] != true){ 
        mp[a[i]] = true; distinct++ ;
        }
    }

    if(distinct == 1){
        cout << "NO" << endl;
        continue;
    }

    else if(distinct == n){
        cout << "YES" << endl;
        cout << "R";
        for(int i=1;i<n;i++){
            cout << "B" ;
        }
        cout << endl;
    }

    else{
        cout << "YES" << endl;
        cout << "R";
        int i=1;
        while(a[i] != a[i-1] && i < n){
            cout << "R";
            i++ ;
        }

        for(i;i<n;i++){
            cout << "B";
        }
        cout << endl;
        
    }
}

    return 0;
}