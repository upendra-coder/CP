#include <bits/stdc++.h>
using namespace std;

int main(){
string str;  cin >> str;

int cnt_1=0, cnt_2=0, cnt_3=0;
for(int i=0;i<str.length();i++){
if(str[i] == '1')  cnt_1++;
else if(str[i] == '2')  cnt_2++;
else if(str[i] == '3')  cnt_3++;
else continue;
}

string ans = "";
while(true){
    if(cnt_1){  ans += "1";  cnt_1--;}
    else if(cnt_2){  ans += "2";  cnt_2--;}
    else if(cnt_3){  ans += "3";  cnt_3--;}
    else break;

    ans += "+" ;
}
 ans.pop_back();
cout << ans << endl ;
    return 0;
}