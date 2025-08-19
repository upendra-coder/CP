#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >> t;

while(t--){
    int x1,y1;  cin >> x1 >> y1 ;
    int x2,y2;  cin >> x2 >> y2 ;
    int x3,y3;  cin >> x3 >> y3 ;
    
    long long ans = 1; 

        if (x2 >= x1 && x3 >= x1) ans += min(x2 - x1, x3 - x1);
        else if (x2 <= x1 && x3 <= x1) ans += min(x1 - x2, x1 - x3);

        if (y2 >= y1 && y3 >= y1) ans += min(y2 - y1, y3 - y1);
        else if (y2 <= y1 && y3 <= y1) ans += min(y1 - y2, y1 - y3);

        cout << ans << endl;

}
    return 0;
}