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

ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

void solve(){

}

int main(){
    int p, n;
    cin >> p >> n;
    ll inv[n+1];
    inv[1] = 1;
    ll ans = 1;
    for (int i = 2; i <= n; i++){
        inv[i] = (p - p/i)*inv[p%i] % p;
        ans ^= inv[i];
    }
    coe(ans);
    return 0;
}

