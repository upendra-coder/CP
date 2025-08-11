#include <bits/stdc++.h>
using namespace std;

int main(){
int n,m;  cin >> n >> m;
bool flag = true;
int points = n*m;

while(points){
    points -= (n+m-1);
    n--;  m--;
    flag = !flag ;
}

if(!flag) cout << "Akshat" << endl;
else cout << "Malvika" << endl;
    return 0;
}