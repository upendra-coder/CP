#include <bits/stdc++.h>
using namespace std;

int main(){
vector<vector<int>> a(5, vector<int>(5));
int row = 0, col = 0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin >> a[i][j];
        if(a[i][j] == 1){
            row = i;  col = j ;
            break ;
        }
    }
}

cout << abs(2-row) + abs(2-col) << endl ;

    return 0;
}