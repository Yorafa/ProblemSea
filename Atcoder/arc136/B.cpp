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
// also can be solved as BIT
int main(){
    int n;
    cin >> n;
    vi a(n), b(n);
    int flag = 0;
    map<int, int> ca, cb;
    for (int i = 0; i < n; i++) {cin >> a[i]; ca[a[i]]++;}
    for (int i = 0; i < n; i++) {cin >> b[i]; cb[b[i]]++;}
    for (auto& pi: ca){
        if (cb.find(pi.first) == cb.end()) {coe("No"); return 0;}
        if (cb[pi.first] != pi.second) {coe("No"); return 0;}
        if (pi.second > 1) flag = 1;
    }
    if (flag) {coe("Yes"); return 0;}
    int inv = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            if (a[i] > a[j]) inv ^= 1;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            if (b[i] > b[j]) inv ^= 1;
        }
    }
    if (inv & 1) {coe("No"); return 0;}
    coe("Yes");
    return 0;
}
