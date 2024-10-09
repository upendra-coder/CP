#include <bits/stdc++.h>
using namespace std ;

int main() {
int t;
cin >> t ;

while(t--) {
    int n , p ;
    cin >> n >> p ;

    vector<int> a(n) ;   vector<int> b(n) ;
    for(int i=0;i<n;i++){
        cin >> a[i] ;
        cin >> b[i] ;
    }

    vector<pair<int, int>> people(n);
        for(int i = 0; i < n; i++) {
            people[i].first = b[i] ;
            people[i].second = a[i] ;
        }
        sort(people.begin(), people.end());

    int people_remaining = n ;
    int cost = 0 ;
    int people_share = 0 ;
    int prev_cost = 0 ;

        for(auto it : people) {
        if(people_remaining == n){
            cost += p ;
            people_share = it.second  ;
            people_remaining-- ;
            prev_cost = it.first ;
        }

        else{
            if(it.first >= p && prev_cost >= p) {
               cost += p ;    
               people_remaining-- ;  continue ;
            }

            if(people_share == 1) {
                cost += prev_cost ;
                prev_cost = it.first ;
                people_share = it.second ;
            }

            else{
            people_share-- ;
            cost += prev_cost ;
            }
            people_remaining-- ;
        }
    }
    cout << cost << endl ;
}
    return 0 ;
}