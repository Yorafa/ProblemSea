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
    ll a,b;
    cin >> a >> b;
    // since ax + by = k we can get k \equiv ax (mod b)
    // since ax \in [1, b-1], then x \in [1, b-1] due to a >= 1 lese x %= b still in [1, b-1]
    // since x > 0, then y = -1 is the maximum solution
    // then ax - b = k \implies x pick b - 1 to make the k maximum
    coe(a*(b-1) - b);
    return 0;
}
