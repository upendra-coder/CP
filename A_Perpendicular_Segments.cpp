#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;  cin >> t ;

    while(t--) {
        int X, Y, K;
		cin >> X >> Y >> K;
		int M = min(X, Y);
		cout << "0 0 " << M << " " << M << endl;
		cout << "0 " << M << " " << M << " 0" << endl;
    }

}