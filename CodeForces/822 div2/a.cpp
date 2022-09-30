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
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int op = INT_MAX;
    for (int i = 0; i < n - 2; i++){
        int f = arr[i+2] - arr[i+1];
        int s = arr[i+1] - arr[i];
        op = min(op, f+s);
    }
    coe(op);
}

int main(){
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
