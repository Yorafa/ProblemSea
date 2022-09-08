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

const int N = 10000000;
const int mod = 1e9 + 7;

ll fac[N+10], inv[N+10];

ll powmod(ll a, ll b){
    ll r = 1;
    for (;b;b>>=1){
        if (b&1) r = r*a %mod;
        a = a*a %mod;
    }
    return r;
}

ll comb(ll a, ll b){
    if (b < 0 || a < b) return 0;
    return fac[a] * inv[b] % mod * inv[a-b] % mod;
}

void solve(){
    ll a, b;
    cin >> a >> b;
    coe(comb(a,b));
}

int main(){
    fac[0] = 1;
    for (int i = 1; i <= N; i++) fac[i] = fac[i-1] * i%mod; 
    inv[N] = powmod(fac[N], mod-2);
    for (int i = N; i >= 1; i--) inv[i-1] = inv[i] * i % mod;
    ll n;
    cin >> n;
    while (n--) solve();
    return 0;
}
