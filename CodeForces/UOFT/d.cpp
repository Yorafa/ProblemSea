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
    ll n, m;
    cin >> n >> m;
    set<int> arr;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr.insert(temp);
    }
    vi col;
    int first = 1, ctn = 0;
    for (int i = 1; i <= (int) 1e9; i++){
        if (arr.find(i) == arr.end()){
            if (m < i) break;
            m -= i;
            col.pb(i);
            ctn++;
        }
    }
    coe(ctn);
    if (ctn == 0) return 0;
    for (int i: col){
        if (first-- == 1) cout << i;
        else cout << " " << i;
    }
    cout << endl;
    return 0;
}
