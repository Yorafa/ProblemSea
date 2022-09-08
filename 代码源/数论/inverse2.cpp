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

unsigned int A, B, C;

inline unsigned int rng61() {
    A ^= A << 16;
    A ^= A >> 5;
    A ^= A << 1;
    unsigned int t = A;
    A = B;
    B = C;
    C ^= t ^ A;
    return C;
}



int main() {
    int p, n;
    scanf("%d%d%u%u%u", &p, &n, &A, &B, &C);
    int a[n+1];
    ll ans = 0;
    for (int i = 1; i <= n; i++){
        a[i] = rng61()%p;
        if (a[i] == 0){ans ^= 1;a[i] = 1;}
    }
    ll S[n + 1], T[n+1];
    S[0] =  1;
    for (int i = 1; i <= n; i++) S[i] = S[i - 1] * a[i] % p;
    ll x,y;
    exgcd(S[n], p, x, y);
    if (x < 0) x += p;
    T[n] = x;
    assert(S[n]*x %p == 1);
    for (int i = n; i >= 1; i--) T[i-1] = T[i] * a[i] % p;
    for (int i = 1; i <= n; i++){
        ll v = T[i] * S[i-1] % p;
        ans ^= v;
    }
    coe(ans);
    return 0;
}
