#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>
#include <climits>
using namespace std;
typedef long long ll;

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<vector<pair<ll, ll>>> g(n+1);
    vector<ll> slow(n+1, 0);
    for (ll i = 0; i < m; i++){
        ll u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    for (ll i = 1; i <= n; i++){
        cin >> slow[i];
    }
    vector<vector<ll>> dist(n+1, vector<ll>(1001, LLONG_MAX));
    vector<vector<bool>> vis(n+1, vector<bool>(1001, false));
    dist[1][slow[1]] = 0;
    priority_queue<tuple<ll, ll, ll>, vector<tuple<ll, ll, ll>>, greater<tuple<ll, ll, ll>>> pq;
    pq.push({0, 1, slow[1]});
    while (!pq.empty()){
        auto [d, u, s] = pq.top();
        pq.pop();
        if (vis[u][s]){
            continue;
        }
        vis[u][s] = true;
        for (auto [v, w] : g[u]){
            ll curr_s = min(s, slow[v]);
            if (dist[v][curr_s] > dist[u][s] + 1LL*w*s){
                dist[v][curr_s] = dist[u][s] + 1LL*w*s;
                pq.push({dist[v][curr_s], v, curr_s});
            }
        }
    }
    ll ans = LLONG_MAX;
    for (int i = 1; i <= 1000; i++){
        ans = min(ans, dist[n][i]);
    }
    cout << ans << "\n";
}

int main() {

    int T = 1;
    cin >> T;
    for (int Task = 1; Task <= T; Task++) {
        solve();
    }

    return 0;
}