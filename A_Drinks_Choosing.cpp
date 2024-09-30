using namespace std ;

int main() {
    int n,k ;
    cin >> n >> k ;

vector<int> ans(n) ;
for(int i=0;i<n;i++) {
    cin >> ans[i] ;
}

int total_sets = (n+1)/2 ;
map<int,int> mp ;
for(int i = 0;i<n;i++) {
  mp[ans[i]]++ ;
}

int pairs = 0 , leftover = 0 ;
for(auto it : mp) {
     pairs += it.second/2 ;
    leftover += it.second % 2 ;
}

int happy_student = pairs * 2 ;
int remaining_set = total_sets - pairs ;
happy_student += min(remaining_set,leftover) ;

cout << happy_student << endl ;

    return 0 ;
}