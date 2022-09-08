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

void merge(ll &a, ll &b, ll c, ll d){
    // want combine new function and write as
    // x = a mod b \implies bt -a = x
    // x = c mod d \implies bt = c-a mod d
    // since gcd(b,d) = g, g|b, g|d, then g| c-a
    // we have bt/g = (c-a)/g mod (d/g)
    // then t = (c-a)/g * (b/g)^{-1} mod (d/g)
    // t - (c-a)/g * (b/g)^{-1}  = 0 mod(d/g)
    // b(t - (c-a)/g * (b/g)^{-1})  = 0 mod (d/g) and b(t - (c-a)/g * (b/g)^{-1})  = 0 mod (b)
    // then b(t - (c-a)/g * (b/g)^{-1})  = 0 mod (bd/g)
    // bt + a - b(c-a)/g * (b/g)^{-1}  = a mod (bd/g)
    // x = a + b(c-a)/g * (b/g)^{-1} mod (bd/g)
    ll x, y;
    ll g = exgcd(b,d,x,y);// solve bx+dy = 1 where x = (c-a)/g * t is one of t's solution
    // see line 41 why it could not be non-zero number
    if ((c-a)% g != 0){
        a = b = -1;
        return;
        // only divisable have the solution
    }
    d/=g;
    // since bt/g + ds/g = (c-a)/ g, t is b/g inverse
    ll t = ((c-a)/g)%d*x%d;
    if (t < 0) t+=d;
    a = a + b*t;
    b = b*d;
}

void solve(){
    int n;
    cin >> n;
    ll a = 0, b = 1;
    // x = a (mod b)
    for (int i = 1; i <= n; i++ ){
        int c, d;
        cin >> c >> d;
        merge(a,b,c,d);
    }
    coe(a);
}

int main(){
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
