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
    ll n, l, r;
    cin >> n >> l >> r;
    ll arr[200005],curr = 0, ans = r*n;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
        curr = min(curr + arr[i], l*i);
        ans = min(ans, curr+(n-i)*r);
    }
    coe(ans);
    return 0;
}
