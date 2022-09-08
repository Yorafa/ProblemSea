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

int ok = 1;

ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

ll exgcd(ll a, ll b, ll &x, ll &y){
    if (b == 0){
        x = 1;
        y = 0;
        return a;
    }
    ll xp, yp;
    ll d = exgcd(b, a%b, xp, yp);
    x = yp;
    y = xp - a/b*yp;
    return d;
}

bool solve(){
    int n;
    cin >> n;
    map<int, vector<pair<int, int>>> eqs;
    for (int i = 1; i <= n; i++){
        int a, m;
        cin >> a >> m;
        for (int j = 2; j*j <= m; j++){
            if (m%j == 0){
                int p = j, pe = 1;
                while (m%j == 0) m/=j, pe *= j;
                eqs[p].pb(mp(pe, a%pe));
                // x = a%pe mod pe
                // we seperate the original to each small equation.
            }
        }
        if (m != 1){
            eqs[m].pb(mp(m, a%m));
        }
    }
    for (auto eq: eqs){
        auto e = eq.second;
        int mx = max_element(all(e)) -> second; // return maximum among all pairs
        // and
        for (auto p: e){
            if (mx % p.first != p.second) return false;
        }
    }
    return true;
}

int main(){
    int T;
    cin >> T;
    while (T--){
        if(solve()) {coe("Yes");
        }else coe("No");
    }
    return 0;
}
