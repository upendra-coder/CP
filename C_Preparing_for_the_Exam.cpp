#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin >> t;

    while(t--){
        int n,m,k;  cin >> n >> m >> k;
        vector<int> list(m); 
        vector<int> ques(k);  

        for(int i=0; i<m; i++){
            cin >> list[i];
        }
        for(int i=0; i<k; i++){
            cin >> ques[i];
        }

        int unknown = n - k;

        if(unknown > 1) {
            for(int i=0; i<m; i++){
                cout << 0;
            }
            cout << endl;
            continue;
        }

        if(unknown == 0) {
            for(int i=0; i<m; i++){
                cout << 1;
            }
            cout << endl;
            continue;
        }

        unordered_set<int> known(ques.begin(), ques.end());
        int single_unknown = -1;
        for(int i = 1; i <= n; i++){
            if(known.find(i) == known.end()){
                single_unknown = i;
                break;
            }
        }

        for(int i=0; i<m; i++){
            if(list[i] == single_unknown) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
    return 0;
}
