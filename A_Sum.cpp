#include <bits/stdc++.h>
using namespace std;

int main(){
int t;  cin >>  t;

while(t--){
      vector<int> nums(3);
      int maxi = INT_MIN;
      int sum = 0;
      for(int i=0;i<3;i++){
            cin >> nums[i];
            maxi = max(maxi,nums[i]);
            sum += nums[i];
      }

      if(sum - maxi  == maxi){
            cout << "YES" << endl;
      } else {
            cout << "NO" << endl;
      }
}

    return 0;
}