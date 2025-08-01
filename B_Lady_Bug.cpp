// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--) {
//         int n;
//         cin >> n;

//         string a, b;
//         cin >> a >> b;

//         int cnt1 = 0, cnt2 = 0;
//         for (int i = 0; i < n; ++i) {
//         if (i & 1) {
//             cnt2 += a[i] == '0';
//             cnt1 += b[i] == '0';
//         } else {
//             cnt1 += a[i] == '0';
//             cnt2 += b[i] == '0';
//         }
//     }

//         cout << (cnt1 >= (n + 1) / 2 && cnt2 >= n / 2 ? "YES" : "NO") << '\n';
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        string a1, b1;
        cin >> a1 >> b1;
        vector<int> bit1;
        vector<int> bit2;
 
        for(int i = 0; i < n; i++) {
            int bit_a = a1[i] - '0';
            int bit_b = b1[i] - '0';
 
            if(i % 2 == 0){
                bit1.push_back(bit_a);
                bit2.push_back(bit_b);
            } else {
                bit2.push_back(bit_a);
                bit1.push_back(bit_b);
            }
        }
 
        int cnt_bit1_0 = 0;
        int cnt_bit2_0 = 0;
        for(int bit : bit1) if(bit == 0) cnt_bit1_0++;
        for(int bit : bit2) if(bit == 0) cnt_bit2_0++;
    
        if(cnt_bit1_0 >= (n + 1) / 2 && cnt_bit2_0 >= n / 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}