#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define lb lower_bound
#define ub upper_bound
#define coe(x) cout << x << endl;

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;


void solve(){
   int n;
   cin >> n;
   string line;
   cin >> line;
   if (n == 2){
       if (line[0] == line[1]){coe("NO");}
       else coe("YES");
   }
   else if (n >= 3){
       coe("NO");
   }else{
       coe("YES");
   }
}

int main(){
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
