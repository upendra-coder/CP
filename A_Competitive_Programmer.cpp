#include <bits/stdc++.h>
using namespace std ;

int main() {
int n ;
cin >> n ;

while(n--){
string num ;
cin >> num ;

int zerocounter = 0 ;
int evencounter = 0 ;
int sum = 0 ;
for (char digit : num) {
            int num = digit - '0';  
            
            if (num == 0) {
                zerocounter++;
            } else if (num % 2 == 0) {
                evencounter++;  
            }
            
            sum += num;  
        }
  bool div3counter = (sum % 3 == 0);
  if (zerocounter > 0 && div3counter && (zerocounter > 1 || evencounter > 0)) {
            cout << "red" << endl;
        } else {
            cout << "cyan" << endl;
        }
}

    return 0 ;
}
