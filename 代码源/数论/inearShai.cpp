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

const int N = 50000000; 
int p[N+100], pr[N+100], ctn = 0;

int main() {
    int n;
    ll ans = 0;
    ll a, b;
    ll mod = 4294967296;
    cin >> n >> a >> b;
    p[1] = 1;
    for (int i = 2; i <= n; i ++){
        if (!p[i]) p[i] = i, pr[++ctn] = i, ans^= (a*i + b) % mod;
        for (int j = 1; j <= ctn && pr[j]*i <= n; j++){
            p[i*pr[j]] = pr[j];
            if (p[i] == pr[j]) break;
        }
    }
    coe(ans);
    return 0;
}
