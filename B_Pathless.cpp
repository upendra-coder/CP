#include <bits/stdc++.h>
using namespace std;  

int main(){
int t;  cin >> t ;


while(t--){
    int n,s;  cin >> n >> s;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int base_sum = 0;
    for(int i=0;i<n;i++){
        base_sum += arr[i];
    }

    if(s < base_sum){
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
            }
            cout << endl;
        }
    else if(s == base_sum){
        cout << -1 << endl;
    }
    else{
        int d = s - base_sum;
        if(d == 1){
            vector<int> zeros, ones, twos;
                for(int x : arr){
                    if(x == 0) zeros.push_back(0);
                    else if(x == 1) ones.push_back(1);
                    else twos.push_back(2);
                }

                for(int x : zeros) cout << x << " ";
                for(int x : twos) cout << x << " ";
                for(int x : ones) cout << x << " ";
                cout << endl;
        } else{
            cout << -1 << endl;
        }
    }

    
}

    return 0;
}