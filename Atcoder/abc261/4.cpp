#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define lb lower_bound
#define ub upper_bound
#define coe(x) cout << x << endl

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;


void solve(){
    
}

int main(){
    int n, m;
    cin >> n >> m;
    ll arr[n+1] = {0}, sa[n+1] = {0};
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    int c,y;
    for (int i = 1; i <= m; i++){
        cin >> c >> y;
        sa[c] = y;
    }
    ll dp[n+1][n+1];
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
            dp[i][j] = dp[i-1][j-1] + arr[i] + sa[j];
        dp[i][0] = 0;
        for (int j = 0; j < i; j++) dp[i][0] = max(dp[i][0], dp[i-1][j]);
    }
    ll ans = 0;
    for (int i = 0; i <= n; i++) ans = max(ans, dp[n][i]);
    coe(ans);
    return 0;
}
