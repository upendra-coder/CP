#include <bits/stdc++.h>
using namespace std;

int main(){
int a,b,c;   cin >> a >> b >> c;

int val1 = a*b*c;
int val2 = (a+b)*c;
int val3 = a*(b+c);
int val4 = a+(b+c);

cout << max(max(val1,val4),max(val2,val3));
    return 0;
}