#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define lb lower_bound
#define ub upper_bound
#define coe(x) cout << x << endl

using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef pair<int,int> pii;

ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

void solve(){
   int n, c;
   cin >> n >> c;
   map<int, int> ctn;
   for (int i = 0; i < n; i++){
       int temp;
       cin >> temp;
       ctn[temp]++;
   }
   int ans = 0;
   for (auto&p: ctn){
        ans += min(p.second, c);
   }
   coe(ans);
}

int main(){
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
