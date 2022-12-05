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

int r[200005], p[200005], arr[200005];

int find(int x){
    if (x == p[x]) return x;
    p[x] = find(p[x]);
    return p[x];
}

void merge(int x, int y){
    int rx = find(x), ry = find(y);
    if (rx == ry) return;
    if (r[rx] > r[ry]){
        r[rx] += r[ry];
        p[ry] = rx;
    }else{
        r[ry] += r[rx];
        p[rx] = ry;
    }
}

void solve(){
    int x, y;
    cin >> x >> y;
    merge(arr[x], arr[y]);
}

int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        r[i] = 1;
        p[i] = i;
    }
    for (int i = 1; i <= n; i++) cin >> arr[i];

    while (m--) solve();

    int cnt = 0;
    for (int i = 1; i <= n; i++){
       if (find(i) == find(arr[i])) cnt++;
    }
    coe(cnt);
    return 0;
}
