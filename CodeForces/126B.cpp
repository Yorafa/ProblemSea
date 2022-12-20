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

const int M = 10000000;
const int N = 10000000;

ll Z[N];

ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

void exkmp(string s){ // or z function
    ll L = 1, R = 0;
    Z[0] = 0;
    for (int i = 1; i < s.size(); i++){
        if (i > R) Z[i] = 0;
        else{
            int k = i - L;
            Z[i] = min(Z[k], R - i + 1);
        }
        while (i + Z[i] < s.size() && s[Z[i]] == s[i + Z[i]]) Z[i]++;
        if (i + Z[i] - 1 > R){
            L = i;
            R = i + Z[i] - 1;
        }
    }

}

void z_function(string s)
{
    ll n = s.size();
    for (ll i = 1, l = 0, r = 0; i < n; ++i)
    {
        if (i <= r)
            Z[i] = min (r - i + 1, Z[i - l]);
        while (i + Z[i] < n && s[Z[i]] == s[i + Z[i]])
            ++Z[i];
        if (i + Z[i] - 1 > r)
            l = i, r = i + Z[i] - 1;
    }
}

void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    ll mx = 0;
    z_function(s);
    //exkmp(s);
    string lg = "Just a legend";
    for (ll i = 0; i < n; i++){
        if (min(Z[i], mx) >= n - i){
            lg = s.substr(i);
            break;
        }
        mx = max(mx, Z[i]);
    }// since the longest contain the shortest, then if shortest exists, then it appear in the longest
    coe(lg);
}

int main(){
    solve();
    return 0;
}
