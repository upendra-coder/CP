#include <bits/stdc++.h>
using namespace std ;

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
long long N,D ;
cin >> N >> D ;

vector<long long>a(N) ;
for(long long i=0;i<N;i++)
cin >> a[i] ;

sort(a.begin(),a.end()) ;
long long end = N-1 ;
long long start = 0 ;

long long cnt = 0 ;
while(end >= start) {
    if(a[end] > D) {
        cnt++ ;  end-- ;
    }

    else {
        long long total_players = 1;
        long long team_power = a[end];
            
            while (end > start && team_power <= D) {
                start++;
                total_players++;
                team_power = a[end] * total_players;
            }

            if (team_power > D) {
                cnt++;
            }
            end--;
    }
}
cout << cnt << endl ;
    return 0 ;
}