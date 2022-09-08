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
typedef unsigned long long ull;

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
    // ax + by => b(kx+y) + (a%b)x where k = a/b
    // Then we denote bx' + (a%b)y'and finally get y' = x = 1
    // and x' = kx + y = 0 and back track
    // x' = a/b*y' + y => y = x' - a/b*y'
    x = yp;
    y = xp - a/b * yp;
    return d;
}

ll fd(ll a, ll b){
    if (a%b == 0) return a/b;
    else if (a>0) return a/b;
    else return a/b - 1;
}


ll cd(ll a, ll b){
    if (a%b == 0) return a/b;
    else if (a>0) return a/b+1;
    else return a/b;
}

void solve(){
    ll a, b, c, x, y;
    ll l1,r1,l2,r2;
    cin >> a >> b >> c >> l1 >> r1 >> l2 >> r2;
    ll d = exgcd(a,b,x,y);
    // since we solve for ax + by = gcd(a,b) = d
    // we want it to be ax + by = c
    if (c%d != 0){
        coe(0);
        return;
    }
    a/=d; b/= d; c/=d;
    ll xx = (ll)x * (c%b) % b;
    if (xx < 0) xx += b;
    ll yy = (c-a*xx)/b;
    // l1 <= xx + bt <= r1; l2 <= yy - at <= r2
    ll t1  = max(cd(l1-xx, b), cd(yy-r2,a)), t2 = min(fd(r1-xx, b), fd(yy - l2,a));
    if (t1 > t2){
        coe(0);
        return;
    }
    coe(t2 - t1 + 1);
}

int main(){
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
