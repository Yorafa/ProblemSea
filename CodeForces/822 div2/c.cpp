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
    int n;
    string T;
    cin >> n >> T;
    vector<ll> t(n+1, 0), rev(n+1, 0);
    for (ll i = 0; i < T.size(); i++) if (T[i] == '1') {t[i+1] = 1; rev[i+1] = 1;}
    ll op = 0;
    for (ll i = 1; i <= n; i++){
        if (!t[i]){
            for (ll j = 1; j*i <= n; j++){
                if (t[j*i]) break;
                if (rev[j*i]) continue;
                rev[j*i] = 1;
                op += i;
            }
        }
    }
    coe(op);
}

int main(){
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
