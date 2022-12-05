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

ll P[N];

ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

void manacher(){
    string a, ap;
    cin >> a;
    ap+= '$'; // insert $ to make full string length go even
    P[0] = 1;
    for (char c : a){
        ap += c;
        ap += '$'; // same as above
    }
    int M = 0, R = 0; // the interval maintain to keep track
    for (ll i = 0; i < ap.size(); i++){
        if (i > R) P[i] = 1;
        else P[i] = min(P[2*M - i], R - i + 1);
        while((i - P[i] >= 0 && i + P[i] < ap.size()) && ap[i-P[i]] == ap[i+P[i]]) P[i]++;
        if (i + P[i] - 1 > R) M = i, R = i + P[i] - 1;
    }
    ll ans = 0;
    for (ll i = 0; i < ap.size(); i++){
        ans = max(ans, P[i]);
    }
    coe(ans);
}

void solve(){
}

int main(){

    return 0;
}
