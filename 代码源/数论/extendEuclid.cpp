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
    // ax + by => b(kx + y) + a%bx where we final get y' = x = 1
    // then we can have x' = kx + y and y = x'-kx
    x = yp;
    y = xp - a/b * yp;
    return d;
}

void solve(){
    ll a, b, x, y;
    cin >> a >> b;
    ll d = exgcd(a, b, x, y);
    // since we solve for ax + by = gcd(a,b), we should do y into -y
    y = -y;
    while (x < 0 || y < 0){
        x += b/d;
        y += a/d;
    }// add up utill non-negative where a(x + b/d) - b(y + a/d) = ax + ab/d - by - ab/d = ax - by
    // therefore we can add both x + b/d and y + a/d infinitely untill two of them are both positive
    coe(x << " " << y);
}

int main(){
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
