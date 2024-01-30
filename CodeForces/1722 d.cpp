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
    ll n;
    cin >> n;
    priority_queue<pair<ll, ll>> pq;
    ll lc[n], sums = 0;
    string l;
    cin >> l;
    for (ll i = 0; i < n; i++){
        if (l[i] == 'L') lc[i] = i;
        else lc[i] = n - i - 1;
        pq.push({(n - lc[i] - 1), i});
        sums += lc[i];
    }
    for(ll i = 0; i < n; i++){
        if (sums+pq.top().first >= sums && pq.top().first >= lc[pq.top().second]){
            sums += pq.top().first - lc[pq.top().second];
            pq.pop();
        }
        cout << sums << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
