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
    
}

int main(){
    int n,q;
    cin >> n >> q;
    vector<vector<int>> L;
    for (int i = 0; i < n; i++){
        int l1;
        cin >> l1;
        L.pb(vector<int>(l1));
        for (int j = 0; j < l1; j++) cin >> L[i][j];
    }
    while(q--){
        int s, t;
        cin >> s >> t;
        coe(L[s-1][t-1]);
    }
    return 0;
}
