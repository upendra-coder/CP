#include <bits/stdc++.h>
using namespace std ;

int main(){
int t ;  cin >> t ;

while(t--){
    int n;  cin >> n;

    cout << 2 << " " ;
    int counter = 1;
    for(int i=2;i<=n;i++){
        cout << i+counter << " ";
        counter++;
    }
    cout << endl ;
}
    return 0;
}