#include <bits/stdc++.h>
using namespace std ;

int main() {
int t;
cin >> t ;

while(t--) {
    int w,h ;
    cin >> w >> h ;
    int n1,n2,n3,n4 ;
    
    
    cin >> n1 ;
    int arr1[n1] ;
    for(int i=0;i<n1;i++) {
        cin >> arr1[i] ;
    }
    cin >> n2 ;
    int arr2[n2] ;
    for(int i=0;i<n2;i++) {
        cin >> arr2[i] ;
    }
    cin >> n3 ;
    int arr3[n3] ;
    for(int i=0;i<n3;i++) {
        cin >> arr3[i] ;
    }
    cin >> n4 ;
    int arr4[n4] ;
    for(int i=0;i<n4;i++) {
        cin >> arr4[i] ;
    }

long long area1 = max((long long)(arr1[n1 - 1] - arr1[0]) * h, (long long)(arr2[n2 - 1] - arr2[0]) * h);
long long area2 = max((long long)(arr3[n3 - 1] - arr3[0]) * w, (long long)(arr4[n4 - 1] - arr4[0]) * w);
        cout << max(area1, area2) << endl;
        }
    return 0 ;
}