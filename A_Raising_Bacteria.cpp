#include <bits/stdc++.h>
using namespace std;

int main(){
int n;  cin >> n;

int days = 0;
while(n > 0){
    if(n%2 == 1) days++;
    n = n/2;
}

cout << days ;
    return 0;
}