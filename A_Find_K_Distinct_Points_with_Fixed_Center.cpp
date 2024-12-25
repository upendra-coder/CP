#include <bits/stdc++.h>
using namespace std ;

int main(){
int t;  cin >> t ;

while(t--){
    int x,y,k;  cin >> x >> y >> k;

    if(x == 0 && y == 0 && k % 2 == 0){
        long long b = 1 ;
        while(k){
            cout << b << " " << b << endl;
            cout << -b << " " << -b << endl;
            k -= 2;   b++;
        }
        continue ;
    }

    if(k % 2 != 0){
        cout << k*x << " " << k*y << endl ;   k--;
        long long a = 1;
        while(k){
            cout << a << " " << a << endl;  
            cout << -a << " " << -a << endl; 
            k -=2; 
            a++;
        }
    }

    else {
        cout << k*x << " " << k*y << endl ; 
        cout << 0 << " " << 0 << endl ;   k -= 2;
        long long a = 1;
        while(k){
            cout << a << " " << a << endl;  
            cout << -a << " " << -a << endl;  
            k -= 2 ;
            a++;
        }
    }
}

    return 0;
}