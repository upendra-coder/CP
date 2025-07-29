#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;  cin >> n;
  vector<int> drinks(n);

    for(int i = 0; i < n; i++) {
        cin >> drinks[i];
    }

    double total = 0;
    for(int i = 0; i < n; i++) {
        total += drinks[i];
    }

    double result = total/n;
    cout << fixed << setprecision(12) << result << endl;

    return 0;
}