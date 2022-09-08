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

map<char, int> cp;

ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

void solve(){
    int n;
    string a;
    map<char, int> ct;
    cin >> n >> a;
    if (n != 5) {
        coe("No");
        return;
    }
    for (int i = 0; i < n; i++){
        if (ct.find(a[i]) == ct.end()) ct[a[i]] = 0;
        ct[a[i]] ++;
    }
    for (auto& c : cp){
        if (ct.find(c.first) == ct.end() || ct[c.first] != c.second){
            coe("No");
            return;
        }
    }
    coe("Yes");
}

int main(){
    int n;
    cin >> n;
    cp['T'] = 1;
    cp['i'] = 1;
    cp['m'] = 1;
    cp['u'] = 1;
    cp['r'] = 1;
    while (n--) solve();
    return 0;
}
